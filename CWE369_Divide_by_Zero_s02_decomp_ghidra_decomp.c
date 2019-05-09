
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00646ff8;
  if (PTR___gmon_start___00646ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400b50(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00647010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00647018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00647020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00647028)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00647030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00647038)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00647040)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00647048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00647050)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00647058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00647060)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00647068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00647070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00647078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00647080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00647088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00647090)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00647098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006470a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_006470a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006470b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006470b8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006470c0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006470c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_006470d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006470d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006470e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006470e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_006470f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006470f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00647100)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00646ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400d97) */
/* WARNING: Removing unreachable block (ram,0x00400da1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400dd4) */
/* WARNING: Removing unreachable block (ram,0x00400dde) */

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


/* WARNING: Removing unreachable block (ram,0x00400e24) */
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
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_11_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_22_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_66_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_66_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_22_good();");
  CWE369_Divide_by_Zero__int_rand_divide_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_02_good();");
  CWE369_Divide_by_Zero__int_zero_divide_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_17_good();");
  CWE369_Divide_by_Zero__int_zero_divide_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_12_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_04_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_17_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_11_good();");
  CWE369_Divide_by_Zero__int_rand_divide_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_18_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_02_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_09_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_16_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_02_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_31_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_65_good();");
  CWE369_Divide_by_Zero__int_zero_divide_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_06_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_10_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_54_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_09_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_31_good();");
  CWE369_Divide_by_Zero__int_zero_divide_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_10_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_41_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_68_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_42_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_53_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_14_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_32_good();");
  CWE369_Divide_by_Zero__int_rand_divide_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_65_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_10_good();");
  CWE369_Divide_by_Zero__int_zero_divide_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_06_good();");
  CWE369_Divide_by_Zero__int_zero_divide_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_65_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_04_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_67_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_44_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_66_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_16_good();");
  CWE369_Divide_by_Zero__int_zero_divide_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_14_good();");
  CWE369_Divide_by_Zero__int_rand_divide_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_44_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_05_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_15_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_64_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_45_good();");
  CWE369_Divide_by_Zero__int_zero_divide_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_34_good();");
  CWE369_Divide_by_Zero__int_zero_divide_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_65_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_07_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_09_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_51_good();");
  CWE369_Divide_by_Zero__int_zero_divide_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_12_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_18_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_54_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_41_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_01_good();");
  CWE369_Divide_by_Zero__int_rand_divide_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_03_good();");
  CWE369_Divide_by_Zero__int_zero_divide_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_41_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_15_good();");
  CWE369_Divide_by_Zero__int_rand_divide_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_15_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_07_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_65_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_44_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_52_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_51_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_34_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_05_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_03_good();");
  CWE369_Divide_by_Zero__int_rand_divide_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_61_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_34_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_06_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_66_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_21_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_42_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_53_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_11_good();");
  CWE369_Divide_by_Zero__int_zero_divide_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_22_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_04_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_02_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_14_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_61_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_63_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_02_good();");
  CWE369_Divide_by_Zero__int_rand_divide_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_15_good();");
  CWE369_Divide_by_Zero__int_zero_divide_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_41_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_32_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_17_good();");
  CWE369_Divide_by_Zero__int_rand_divide_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_17_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_02_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_18_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_65_good();");
  CWE369_Divide_by_Zero__int_rand_divide_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_67_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_10_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_64_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_45_good();");
  CWE369_Divide_by_Zero__int_rand_divide_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_10_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_17_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_12_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_31_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_51_good();");
  CWE369_Divide_by_Zero__int_rand_divide_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_11_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_63_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_13_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_53_good();");
  CWE369_Divide_by_Zero__int_zero_divide_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_21_good();");
  CWE369_Divide_by_Zero__int_rand_divide_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_68_good();");
  CWE369_Divide_by_Zero__int_rand_divide_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_52_good();");
  CWE369_Divide_by_Zero__int_rand_divide_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_63_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_13_good();");
  CWE369_Divide_by_Zero__int_rand_divide_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_22_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_07_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_05_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_21_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_61_good();");
  CWE369_Divide_by_Zero__int_zero_divide_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_10_good();");
  CWE369_Divide_by_Zero__int_rand_divide_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_61_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_45_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_64_good();");
  CWE369_Divide_by_Zero__int_zero_divide_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_51_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_68_good();");
  CWE369_Divide_by_Zero__int_zero_divide_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_06_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_01_good();");
  CWE369_Divide_by_Zero__int_zero_divide_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_42_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_34_good();");
  CWE369_Divide_by_Zero__int_rand_divide_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_09_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_67_good();");
  CWE369_Divide_by_Zero__int_rand_divide_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_03_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_53_good();");
  CWE369_Divide_by_Zero__int_rand_divide_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_54_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_17_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_66_good();");
  CWE369_Divide_by_Zero__int_zero_divide_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_53_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_66_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_65_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_65_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_05_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_22_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_42_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_44_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_21_good();");
  CWE369_Divide_by_Zero__int_zero_divide_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_41_good();");
  CWE369_Divide_by_Zero__int_rand_divide_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_63_good();");
  CWE369_Divide_by_Zero__int_zero_divide_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_16_good();");
  CWE369_Divide_by_Zero__int_rand_divide_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_12_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_07_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_15_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_10_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_10_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_64_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_16_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_09_good();");
  CWE369_Divide_by_Zero__int_rand_divide_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_41_good();");
  CWE369_Divide_by_Zero__int_zero_divide_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_11_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_42_good();");
  CWE369_Divide_by_Zero__int_rand_divide_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_68_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_05_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_08_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_41_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_41_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_31_good();");
  CWE369_Divide_by_Zero__int_rand_divide_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_12_good();");
  CWE369_Divide_by_Zero__int_rand_divide_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_11_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_34_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_68_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_54_good();");
  CWE369_Divide_by_Zero__int_zero_divide_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_03_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_05_good();");
  CWE369_Divide_by_Zero__int_zero_divide_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_42_good();");
  CWE369_Divide_by_Zero__int_zero_divide_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_16_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_16_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_44_good();");
  CWE369_Divide_by_Zero__int_rand_divide_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_45_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_08_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_34_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_07_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_21_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_18_good();");
  CWE369_Divide_by_Zero__int_rand_divide_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_04_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_67_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_67_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_14_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_67_good();");
  CWE369_Divide_by_Zero__int_zero_divide_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_03_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_13_good();");
  CWE369_Divide_by_Zero__int_zero_divide_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_18_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_32_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_53_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_68_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_64_good();");
  CWE369_Divide_by_Zero__int_rand_divide_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_07_good();");
  CWE369_Divide_by_Zero__int_rand_divide_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_08_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_63_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_02_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_02_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_09_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_04_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_54_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_51_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_01_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_18_good();");
  CWE369_Divide_by_Zero__int_zero_divide_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_01_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_05_good();");
  CWE369_Divide_by_Zero__int_rand_divide_05_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_14_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_63_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_12_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_01_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_51_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_45_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_08_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_06_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_51_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_51_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_03_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_13_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_15_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_42_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_42_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_08_good();");
  CWE369_Divide_by_Zero__int_zero_divide_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_01_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_66_good();");
  CWE369_Divide_by_Zero__int_rand_divide_66_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_64_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_04_good();");
  CWE369_Divide_by_Zero__int_rand_divide_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_14_good();");
  CWE369_Divide_by_Zero__int_zero_divide_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_01_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_01_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_61_good();");
  CWE369_Divide_by_Zero__int_rand_divide_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_61_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_13_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_12_good();");
  CWE369_Divide_by_Zero__int_zero_divide_12_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_31_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_21_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_32_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_32_good();");
  CWE369_Divide_by_Zero__int_zero_divide_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_11_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_11_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_34_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_34_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_13_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_31_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_64_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_64_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_31_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_31_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_32_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_68_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_68_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_54_good();");
  CWE369_Divide_by_Zero__int_rand_divide_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_17_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_17_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_04_good();");
  CWE369_Divide_by_Zero__int_zero_divide_04_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_53_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_53_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_15_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_15_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_44_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_14_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_14_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_06_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_67_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_67_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_45_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_52_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_18_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_18_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_44_good();");
  CWE369_Divide_by_Zero__int_zero_divide_44_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_13_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_13_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_07_good();");
  CWE369_Divide_by_Zero__int_zero_divide_07_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_22_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_21_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_21_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_54_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_54_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_08_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_52_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_08_good();");
  CWE369_Divide_by_Zero__int_rand_divide_08_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_52_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_16_good();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_16_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_52_good();");
  CWE369_Divide_by_Zero__int_zero_divide_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_63_good();");
  CWE369_Divide_by_Zero__int_rand_divide_63_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_09_good();");
  CWE369_Divide_by_Zero__int_zero_divide_09_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_32_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_32_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_22_good();");
  CWE369_Divide_by_Zero__int_zero_divide_22_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_52_good();");
  CWE369_Divide_by_Zero__int_rand_modulo_52_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_61_good();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_61_good();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_45_good();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_45_good();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_03_good();");
  CWE369_Divide_by_Zero__int_zero_modulo_03_good();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_06_good();");
  CWE369_Divide_by_Zero__int_rand_divide_06_good();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_11_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_22_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_66_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_66_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_22_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_02_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_17_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_12_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_04_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_17_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_11_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_18_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_02_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_09_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_16_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_02_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_31_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_65_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_06_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_10_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_54_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_09_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_31_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_10_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_41_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_68_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_42_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_53_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_14_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_32_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_65_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_10_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_06_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_65_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_04_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_67_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_44_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_66_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_16_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_14_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_44_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_05_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_15_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_64_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_45_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_34_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_65_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_07_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_09_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_51_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_12_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_18_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_54_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_41_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_01_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_03_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_41_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_15_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_15_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_07_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_65_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_44_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_52_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_51_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_34_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_05_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_03_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_61_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_34_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_06_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_66_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_21_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_42_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_53_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_11_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_22_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_04_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_02_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_14_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_61_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_63_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_02_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_15_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_41_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_32_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_17_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_17_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_02_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_18_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_65_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_67_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_10_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_64_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_45_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_10_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_17_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_12_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_31_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_51_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_11_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_63_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_13_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_53_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_21_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_68_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_52_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_63_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_13_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_22_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_07_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_05_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_21_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_61_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_10_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_61_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_45_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_64_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_51_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_68_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_06_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_01_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_42_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_34_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_09_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_67_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_03_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_53_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_54_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_17_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_66_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_53_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_66_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_65_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_65_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_05_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_22_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_42_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_44_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_21_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_41_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_63_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_16_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_12_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_07_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_15_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_10_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_10_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_64_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_16_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_09_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_41_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_11_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_42_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_68_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_05_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_08_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_41_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_41_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_31_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_12_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_11_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_34_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_68_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_54_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_03_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_05_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_42_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_16_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_16_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_44_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_45_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_08_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_34_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_07_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_21_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_18_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_04_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_67_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_67_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_14_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_67_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_03_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_13_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_18_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_32_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_53_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_68_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_64_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_07_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_08_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_63_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_02_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_02_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_09_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_04_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_54_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_51_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_01_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_18_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_01_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_05_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_05_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_14_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_63_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_12_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_01_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_51_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_45_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_08_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_06_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_51_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_51_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_03_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_13_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_15_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_42_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_42_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_08_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_66_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_66_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_64_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_04_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_14_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_01_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_01_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_61_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_61_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_13_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_12_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_12_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_31_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_21_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_32_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_32_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_11_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_11_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_34_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_34_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_13_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_31_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_64_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_64_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_31_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_31_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_32_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_68_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_68_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_54_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_17_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_17_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_04_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_04_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_53_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_53_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_15_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_15_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_44_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_14_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_14_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_06_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_06_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_67_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_67_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_45_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_52_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_18_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_18_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_44_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_44_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_13_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_13_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_07_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_07_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_22_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_21_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_21_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_54_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_54_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_08_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_52_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_08_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_08_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_52_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_divide_16_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_divide_16_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_52_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_63_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_63_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_09_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_09_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_32_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_32_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_divide_22_bad();");
  CWE369_Divide_by_Zero__int_zero_divide_22_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_modulo_52_bad();");
  CWE369_Divide_by_Zero__int_rand_modulo_52_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_listen_socket_modulo_61_bad();");
  CWE369_Divide_by_Zero__int_listen_socket_modulo_61_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_fscanf_modulo_45_bad();");
  CWE369_Divide_by_Zero__int_fscanf_modulo_45_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_zero_modulo_03_bad();");
  CWE369_Divide_by_Zero__int_zero_modulo_03_bad();
  printLine("Calling CWE369_Divide_by_Zero__int_rand_divide_06_bad();");
  CWE369_Divide_by_Zero__int_rand_divide_06_bad();
  return 0;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_21_bad(void)

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


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_52b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_divide_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    local_c = 0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403c42) */
/* WARNING: Removing unreachable block (ram,0x00403c66) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(0xe,uParm2,2);
  }
  else {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_16_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_01_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_zero_modulo_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_zero_modulo_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 / local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_14),uParm2,100 % local_14);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 / local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


ulong goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405349) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_modulo_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_modulo_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_modulo_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040566e) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004056a8) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_66b_badSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_51_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_51b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_divide_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE369_Divide_by_Zero__int_fscanf_modulo_65b_badSink;
  local_14 = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004315e6,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE369_Divide_by_Zero__int_fscanf_modulo_65b_goodB2GSink;
  local_14 = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004315e6,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 7;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(0xe,uParm2,2);
  }
  else {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_15_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431640,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431640,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431640,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE369_Divide_by_Zero__int_zero_divide_61b_badSource(void)

{
  return 0;
}


undefined8 CWE369_Divide_by_Zero__int_zero_divide_61b_goodG2BSource(void)

{
  return 7;
}


undefined8 CWE369_Divide_by_Zero__int_zero_divide_61b_goodB2GSource(void)

{
  return 0;
}


void CWE369_Divide_by_Zero__int_zero_divide_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_c = 0;
  }
  if (globalFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406187) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004316ee,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_fscanf_modulo_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004316ee,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_63b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_listen_socket_divide_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_004316f8,&local_c);
  return (ulong)local_c;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_004316f8,&local_c);
  return (ulong)local_c;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_21_bad(void)

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


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
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


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_51_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_51b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_rand_divide_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_64b_goodB2GSink(local_1c);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54d_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_06_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040754d) */

void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407631) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_68b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_68b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_68b_goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodB2GData),uParm2
                 ,100 % CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodB2GData);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407889) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408202) */
/* WARNING: Removing unreachable block (ram,0x00408214) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408264) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040829d) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_divide_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_divide_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_divide_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_badSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *(int *)(lParm1 + 8);
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_05_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00431a20,&local_c);
  }
  if (staticTrue != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00431a20,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00431a20,&local_c);
  }
  if (staticTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_41_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431a60,&local_c);
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431a60,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431b46,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_fscanf_modulo_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431b46,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_64b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_goodB2GSink(&local_18);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_rand_modulo_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_64b_goodB2GSink(local_1c);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_68b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_68_badData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_68b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodG2BData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_68b_goodB2GSink
               (undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodB2GData)
                 ,uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodB2GData);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_02_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431bb8,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431bb8,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431bb8,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_listen_socket_divide_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_66b_goodB2GSink(local_38);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_fscanf_modulo_32_bad(void)

{
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = -1;
  local_24 = -1;
  __isoc99_fscanf(stdin,&DAT_00431c60,&local_24);
  *local_10 = local_24;
  local_1c = *local_18;
  printIntLine(100 % (long)local_1c & 0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = -1;
  local_24 = -1;
  __isoc99_fscanf(stdin,&DAT_00431c60,&local_24);
  *local_10 = local_24;
  local_1c = *local_18;
  if (local_1c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_1c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_listen_socket_divide_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_64b_goodB2GSink(&local_18);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_21_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431c90,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431c90,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431c90,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_03_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431cd0,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431cd0,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00431cd0,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_54b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_divide_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_04_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b2d6) */

void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b3bb) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_31_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_68 [16];
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = 0;
      local_56 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_58,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_68,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_68[(long)local_24] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_20 != -1) {
      close(local_20);
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  else {
    local_18 = 0xffffffff;
    local_10 = -1;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(2,uParm2,2);
  }
  else {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_rand_divide_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_63b_goodB2GSink(local_1c);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431e0e,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_68_badData = local_c;
  CWE369_Divide_by_Zero__int_fscanf_modulo_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_fscanf_modulo_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431e0e,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_68_goodB2GData = local_c;
  CWE369_Divide_by_Zero__int_fscanf_modulo_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c293) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c2e3) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_zero_divide_32_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  printIntLine(100 / 0 & 0xffffffff,uParm2,100 % 0 & 0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c524) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_divide_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_zero_divide_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_divide_64b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_11_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00431ee8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00431ee8,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00431ee8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine(100 % (long)local_14 & 0xffffffff);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_14 & 0xffffffff);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_12_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00431f50,&local_c);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00431f50,&local_c);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00431f50,&local_c);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(2,uParm2,2);
  }
  else {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE369_Divide_by_Zero__int_fscanf_modulo_61b_badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00431f7e,&local_c);
  return (ulong)local_c;
}


undefined8 CWE369_Divide_by_Zero__int_fscanf_modulo_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE369_Divide_by_Zero__int_fscanf_modulo_61b_goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00431f7e,&local_c);
  return (ulong)local_c;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_67_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431fae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00431fae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53d_goodB2GSink((ulong)uParm1);
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


void CWE369_Divide_by_Zero__int_rand_divide_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
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


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_07_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00432070,&local_c);
  }
  if (staticFive == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00432070,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00432070,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_31_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dbd8) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_17_bad(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004320d8,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine(100 % (long)local_14 & 0xffffffff);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004320d8,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_14 & 0xffffffff);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e52d) */
/* WARNING: Removing unreachable block (ram,0x0040e53f) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e58b) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e5c1) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE369_Divide_by_Zero__int_rand_divide_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_rand_divide_65b_goodG2BSink(7,uParm2,7);
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
  CWE369_Divide_by_Zero__int_rand_divide_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_15_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_67_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_67b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_53b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_10_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00432208,&local_c);
  }
  if (globalTrue != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00432208,&local_c);
  }
  if (globalFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00432208,&local_c);
  }
  if (globalTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f0bd) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f0fb) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_68b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_68_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_divide_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_68b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_68_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_divide_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_68b_goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_modulo_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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


void CWE369_Divide_by_Zero__int_listen_socket_modulo_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc0c) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc5c) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_01_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00432380,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00432380,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_68b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_68_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_modulo_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_68b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_68_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_modulo_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_68b_goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_68_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_zero_modulo_68_goodB2GData);
  }
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_41_bad(void)

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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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


void CWE369_Divide_by_Zero__int_rand_divide_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_fscanf_modulo_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_fscanf_modulo_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_fscanf_modulo_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_45_badData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodG2BData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodB2GData)
                 ,uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_zero_divide_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_zero_divide_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_zero_divide_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411127) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041147d) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411624) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_68_badData = rand();
    CWE369_Divide_by_Zero__int_rand_divide_68_badData =
         CWE369_Divide_by_Zero__int_rand_divide_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE369_Divide_by_Zero__int_rand_divide_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_rand_divide_68b_goodG2BSink();
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
    CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData = rand();
    CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData =
         CWE369_Divide_by_Zero__int_rand_divide_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE369_Divide_by_Zero__int_rand_divide_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_34_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_c = 0;
  }
  if (staticFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411a79) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_66b_badSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_divide_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_divide_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_divide_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_03_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_rand_modulo_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_63b_goodB2GSink(local_1c);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_67_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_67b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_67b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_68_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_68_badData = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_zero_modulo_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_68_goodB2GData = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_53b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_divide_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_34_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004123b5) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_66b_badSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *(int *)(lParm1 + 8);
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004124fb) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041254b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_34_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 7;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(2,uParm2,2);
  }
  else {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_listen_socket_divide_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = -1;
  local_c = -1;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  printIntLine(100 / (long)local_2c & 0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = -1;
  local_c = -1;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_2c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_45_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_modulo_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_45_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_45_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_modulo_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_modulo_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_zero_modulo_45_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_zero_modulo_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004137ce) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413808) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_zero_modulo_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_66b_goodB2GSink(local_28);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_24),uParm2,100 % local_24);
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    if (local_24 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_24),uParm2,100 % local_24);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_divide_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_zero_divide_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_divide_63b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_44_bad(undefined8 uParm1,undefined8 uParm2)

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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
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


void CWE369_Divide_by_Zero__int_rand_modulo_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_0043299e,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_0043299e,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004142b3) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_02_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414a33) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414bd7) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_18_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE369_Divide_by_Zero__int_rand_modulo_61b_badSource(void)

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


undefined8 CWE369_Divide_by_Zero__int_rand_modulo_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE369_Divide_by_Zero__int_rand_modulo_61b_goodB2GSource(void)

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


void CWE369_Divide_by_Zero__int_rand_modulo_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_10_good(void)

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


void CWE369_Divide_by_Zero__int_zero_divide_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_34_bad(void)

{
  int local_10;
  int local_c;
  
  local_10 = -1;
  __isoc99_fscanf(stdin,&DAT_00432b78,&local_10);
  local_c = local_10;
  printIntLine(100 % (long)local_10 & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int local_10;
  int local_c;
  
  local_10 = -1;
  __isoc99_fscanf(stdin,&DAT_00432b78,&local_10);
  local_c = local_10;
  if (local_10 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_10 & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_66b_badSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *(int *)(lParm1 + 8);
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_rand_divide_32_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
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
  printIntLine(100 / (long)(int)local_30 & 0xffffffff,uParm2,100 % (long)(int)local_30 & 0xffffffff)
  ;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
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
  if (local_30 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)(int)local_30 & 0xffffffff,uParm2,
                 100 % (long)(int)local_30 & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_67_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_67b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_divide_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_66b_goodB2GSink(local_38);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_listen_socket_divide_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_63b_goodB2GSink(&local_18);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432cae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432cae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004174d5) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417527) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004176c4) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417716) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_zero_modulo_32_bad(undefined8 uParm1,undefined8 uParm2)

{
  ulong uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  uVar1 = 100 % 0 & 0xffffffff;
  printIntLine(uVar1,uParm2,uVar1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004178e1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_badData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodG2BData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_goodB2GSink
               (undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodB2GData)
                 ,uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodB2GData);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432e66,&local_c);
  local_20 = local_c;
  CWE369_Divide_by_Zero__int_fscanf_modulo_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_fscanf_modulo_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432e66,&local_c);
  local_20 = local_c;
  CWE369_Divide_by_Zero__int_fscanf_modulo_66b_goodB2GSink(local_28);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_66_good(void)

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


void CWE369_Divide_by_Zero__int_rand_modulo_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432eae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00432eae,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_04_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418064) */

void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418145) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_31_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_68 [16];
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = 0;
      local_56 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_58,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_68,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_68[(long)local_24] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_20 != -1) {
      close(local_20);
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  else {
    local_18 = 0xffffffff;
    local_10 = -1;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  else {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(0xe,uParm2,2);
  }
  else {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_zero_modulo_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_64b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_45_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_divide_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_45_badData = rand();
    CWE369_Divide_by_Zero__int_rand_divide_45_badData =
         CWE369_Divide_by_Zero__int_rand_divide_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_45_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_divide_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData);
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
    CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData = rand();
    CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData =
         CWE369_Divide_by_Zero__int_rand_divide_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_54b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418c78) */
/* WARNING: Removing unreachable block (ram,0x00418c8a) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418cd8) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418d10) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_31_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418e3e) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_31_good(void)

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


void CWE369_Divide_by_Zero__int_listen_socket_divide_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE369_Divide_by_Zero__int_rand_modulo_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_rand_modulo_65b_goodG2BSink(7,uParm2,7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine(100 / (long)local_14 & 0xffffffff);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_14 & 0xffffffff);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 / local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_67_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_67b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_15_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_divide_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_18_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433170,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433170,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_53c_goodB2GSink((ulong)uParm1);
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


void CWE369_Divide_by_Zero__int_rand_modulo_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
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


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_68b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_68_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_modulo_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_68b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_68_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_modulo_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_68b_goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE369_Divide_by_Zero__int_listen_socket_divide_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE369_Divide_by_Zero__int_listen_socket_divide_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE369_Divide_by_Zero__int_listen_socket_divide_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_divide_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_rand_divide_22_badSink((ulong)uVar1);
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
  CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G1Sink((ulong)uVar1);
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
  CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_rand_divide_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_divide_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_rand_divide_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_07_good(void)

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


void CWE369_Divide_by_Zero__int_zero_modulo_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_53d_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_41_bad(void)

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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
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


void CWE369_Divide_by_Zero__int_rand_modulo_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cd14) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cd50) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_51_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004334e6,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004334e6,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_divide_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_divide_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_listen_socket_divide_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_68_badData = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_68_badData =
         CWE369_Divide_by_Zero__int_rand_modulo_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE369_Divide_by_Zero__int_rand_modulo_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_rand_modulo_68b_goodG2BSink();
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
    CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData =
         CWE369_Divide_by_Zero__int_rand_modulo_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE369_Divide_by_Zero__int_rand_modulo_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68_badData = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68_goodB2GData = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_54e_goodB2GSink((ulong)uParm1);
  return;
}


undefined8 badSource(void)

{
  return 0;
}


void CWE369_Divide_by_Zero__int_zero_divide_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodB2GSource(void)

{
  return 0;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_66b_badSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  uVar1 = 100 % *(int *)(lParm1 + 8);
  printIntLine((ulong)uVar1,uParm2,uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *(int *)(lParm1 + 8);
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54e_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00433610,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodB2GData),uParm2
                 ,100 % CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_00433610,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_06_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433684,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e2b4) */

void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433684,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433684,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e36b) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e486) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e4d8) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_rand_modulo_22_badSink((ulong)uVar1);
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
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G1Sink((ulong)uVar1);
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
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_rand_modulo_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_c = 0;
  }
  if (staticFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e938) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_13_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00433798,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00433798,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00433798,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_03_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_rand_modulo_66b_goodG2BSink(local_28);
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
  
  local_1c = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_modulo_66b_goodB2GSink(local_38);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_listen_socket_modulo_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = -1;
  local_c = -1;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  printIntLine(100 % (long)local_2c & 0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = -1;
  local_c = -1;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (local_2c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_2c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_09_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004338b8,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004338b8,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_004338b8,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fcc2) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fe6d) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_68_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_68_badData = 0;
  CWE369_Divide_by_Zero__int_zero_divide_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_zero_divide_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_68_goodB2GData = 0;
  CWE369_Divide_by_Zero__int_zero_divide_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_18_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_34_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042016f) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_modulo_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_modulo_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_zero_modulo_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_badData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodG2BData),
               uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodB2GData)
                 ,uParm2,100 % CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
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
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042084e) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042088a) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_modulo_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_zero_modulo_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE369_Divide_by_Zero__int_zero_modulo_63b_goodB2GSink(&local_c);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 7;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_64b_goodB2GSink(&local_18);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_14_bad(void)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00433a48,&local_c);
  }
  if (globalFive == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00433a48,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00433a48,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420ed3) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_54b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421455) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004215fd) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticFive == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0;
}


void CWE369_Divide_by_Zero__int_zero_modulo_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodB2GSource(void)

{
  return 0;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_67b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_67b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_67b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_52b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    local_c = 0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421f3b) */
/* WARNING: Removing unreachable block (ram,0x00421f61) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(2,uParm2,2);
  }
  else {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54e_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54e_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_54e_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE369_Divide_by_Zero__int_zero_divide_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_zero_divide_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE369_Divide_by_Zero__int_zero_divide_66b_goodB2GSink(local_28);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_24),uParm2,100 % local_24);
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
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
    if (local_24 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_24),uParm2,100 % local_24);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 / local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_44_bad(undefined8 uParm1,undefined8 uParm2)

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


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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


void CWE369_Divide_by_Zero__int_rand_divide_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_16_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_65b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_65b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_65b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_02_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_04_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433d10,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422da6) */

void goodB2G1(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433d10,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_00433d10,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422e5a) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_31_bad(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  __isoc99_fscanf(stdin,&DAT_00433d50,&local_14);
  local_c = local_14;
  local_10 = local_14;
  printIntLine(100 % (long)local_14 & 0xffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  __isoc99_fscanf(stdin,&DAT_00433d50,&local_14);
  local_c = local_14;
  local_10 = local_14;
  if (local_14 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_14 & 0xffffffff);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_52c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_divide_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 7;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(100 % local_14),uParm2,100 % local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53d_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE369_Divide_by_Zero__int_rand_divide_61b_badSource(void)

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


undefined8 CWE369_Divide_by_Zero__int_rand_divide_61b_goodG2BSource(void)

{
  return 7;
}


ulong CWE369_Divide_by_Zero__int_rand_divide_61b_goodB2GSource(void)

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


void CWE369_Divide_by_Zero__int_rand_divide_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_10_good(void)

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


void CWE369_Divide_by_Zero__int_fscanf_modulo_08_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00433e78,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00433e78,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00433e78,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423bd0) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423c0c) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_51_bad(void)

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
  CWE369_Divide_by_Zero__int_rand_modulo_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_51b_goodG2BSink(7);
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
  CWE369_Divide_by_Zero__int_rand_modulo_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_badSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE369_Divide_by_Zero__int_listen_socket_divide_65b_badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_65b_goodG2BSink(7,uParm2,7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE369_Divide_by_Zero__int_listen_socket_divide_65b_goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_01_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / (int)uVar1),uParm2,100 % uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  printIntLine(100 / (long)local_c & 0xffffffff);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 7;
  local_20 = 7;
  CWE369_Divide_by_Zero__int_rand_divide_66b_goodG2BSink(local_28);
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
  
  local_1c = 0xffffffff;
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
  CWE369_Divide_by_Zero__int_rand_divide_66b_goodB2GSink(local_38);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE369_Divide_by_Zero__int_zero_modulo_61b_badSource(void)

{
  return 0;
}


undefined8 CWE369_Divide_by_Zero__int_zero_modulo_61b_goodG2BSource(void)

{
  return 7;
}


undefined8 CWE369_Divide_by_Zero__int_zero_modulo_61b_goodB2GSource(void)

{
  return 0;
}


void CWE369_Divide_by_Zero__int_zero_modulo_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalTrue != 0) {
    local_c = 0;
  }
  if (globalFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424a09) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (globalTrue != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_listen_socket_modulo_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_52b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_52b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_52b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_51b_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_51b_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_51b_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_45_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_modulo_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_45_badData = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_45_badData =
         CWE369_Divide_by_Zero__int_rand_modulo_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_45_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_rand_modulo_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_rand_modulo_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData);
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
    CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData = rand();
    CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData =
         CWE369_Divide_by_Zero__int_rand_modulo_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 7;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


ulong goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54c_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54d_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54c_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_54c_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_zero_modulo_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425775) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_06_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004258cb) */

void goodB2G1(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

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
  if (uVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % uVar1),uParm2,100 % uVar1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004259b3) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_divide_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_divide_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_rand_divide_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425b76) */

void goodB2G(void)

{
  printLine("This would result in a divide by zero");
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53d_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53d_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_53d_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_modulo_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_bad(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004341de,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_badGlobal = 1;
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004341de,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G1Global = 0;
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004341de,&local_c);
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G2Global = 1;
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodG2BGlobal = 1;
  CWE369_Divide_by_Zero__int_fscanf_modulo_22_goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_22_good(void)

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


void CWE369_Divide_by_Zero__int_rand_divide_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
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
    if (local_1c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / (int)local_1c),uParm2,100 % local_1c);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 7;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_modulo_61b_badSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_modulo_61b_goodG2BSource(0xffffffff);
  printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = CWE369_Divide_by_Zero__int_zero_modulo_61b_goodB2GSource(0xffffffff);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iVar1),uParm2,100 % iVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 % (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_modulo_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_51_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_51b_goodG2BSink(7);
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_51b_goodB2GSink(0);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    printIntLine(100 / (long)local_c & 0xffffffff);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
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
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine(100 / (long)local_c & 0xffffffff);
    }
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(100 / local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (staticTrue != 0) {
    printIntLine(0xe,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54d_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54e_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54d_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_54d_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_fscanf_modulo_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_53b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 % 0),uParm2,100 % 0);
  }
  return;
}


void goodB2G1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042736b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("This would result in a divide by zero");
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 7;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(100 % local_c),uParm2,100 % local_c);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(2,uParm2,2);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_modulo_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_64b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_64b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_64b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52c_badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52c_goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_52c_goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_16_bad(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_004343d8,&local_c);
  printIntLine(100 % (long)local_c & 0xffffffff);
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = -1;
  __isoc99_fscanf(stdin,&DAT_004343d8,&local_c);
  if (local_c == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine(100 % (long)local_c & 0xffffffff);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(2,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_68_badData = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodG2BData = 7;
  CWE369_Divide_by_Zero__int_listen_socket_divide_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE369_Divide_by_Zero__int_listen_socket_divide_68_goodB2GData = local_c;
  CWE369_Divide_by_Zero__int_listen_socket_divide_68b_goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_45_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_divide_45_badData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_45_bad(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_45_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_divide_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_45_goodG2BData = 7;
  goodG2BSink();
  return;
}


void goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_45_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_45_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_zero_divide_45_goodB2GData);
  }
  return;
}


void goodB2G(void)

{
  CWE369_Divide_by_Zero__int_zero_divide_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
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
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(int iParm1,undefined8 uParm2)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("This would result in a divide by zero");
    }
    else {
      printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(100 / iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(7);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54b_badSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54c_badSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54b_goodG2BSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_rand_divide_54b_goodB2GSink(uint uParm1)

{
  CWE369_Divide_by_Zero__int_rand_divide_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_63b_badSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_63b_goodG2BSink(int *piParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % *piParm1),uParm2,100 % *piParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_63b_goodB2GSink(int *piParm1,undefined8 uParm2)

{
  uint uVar1;
  
  if (*piParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar1 = 100 % *piParm1;
    printIntLine((ulong)uVar1,uParm2,uVar1);
  }
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_68b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_68_badData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_divide_68_badData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_68b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_68_goodG2BData),uParm2,
               100 % CWE369_Divide_by_Zero__int_zero_divide_68_goodG2BData);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_68b_goodB2GSink(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE369_Divide_by_Zero__int_zero_divide_68_goodB2GData == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / CWE369_Divide_by_Zero__int_zero_divide_68_goodB2GData),uParm2,
                 100 % CWE369_Divide_by_Zero__int_zero_divide_68_goodB2GData);
  }
  return;
}


void badSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004344c0,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(7,uParm2,7);
  return;
}


void goodB2GSink(int iParm1,undefined8 uParm2)

{
  if (iParm1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 % iParm1),uParm2,100 % iParm1);
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0xffffffff;
  __isoc99_fscanf(stdin,&DAT_004344c0,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE369_Divide_by_Zero__int_fscanf_modulo_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE369_Divide_by_Zero__int_rand_modulo_32_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
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
  uVar4 = 100 % (long)(int)local_30 & 0xffffffff;
  printIntLine(uVar4,uParm2,uVar4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 7;
  local_20 = 7;
  printIntLine(2,uParm2,2);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
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
  if (local_30 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    uVar4 = 100 % (long)(int)local_30 & 0xffffffff;
    printIntLine(uVar4,uParm2,uVar4);
  }
  return;
}


void CWE369_Divide_by_Zero__int_rand_modulo_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / 0),uParm2,100 % 0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042803d) */
/* WARNING: Removing unreachable block (ram,0x0042804f) */

void goodB2G1(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042809d) */

void goodB2G2(void)

{
  printLine("This would result in a divide by zero");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004280d4) */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  printIntLine(0xe,uParm2,2);
  return;
}


void CWE369_Divide_by_Zero__int_zero_divide_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_66b_badSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_66b_goodG2BSink(long lParm1,undefined8 uParm2)

{
  printIntLine((ulong)(uint)(100 / *(int *)(lParm1 + 8)),uParm2,100 % *(int *)(lParm1 + 8));
  return;
}


void CWE369_Divide_by_Zero__int_listen_socket_divide_66b_goodB2GSink(long lParm1,undefined8 uParm2)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (iVar1 == 0) {
    printLine("This would result in a divide by zero");
  }
  else {
    printIntLine((ulong)(uint)(100 / iVar1),uParm2,100 % iVar1);
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
  printf((char *)(double)fParm1,&DAT_004345a5);
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
  printf(pcParm1,&DAT_004345c2);
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
    __isoc99_sscanf(lVar1,&DAT_004345d0,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004345d8,&local_14);
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

