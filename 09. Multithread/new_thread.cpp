#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;
#define SO_THREAD 4 
void *InLoiChao(void *threadid)
{
   cout << "Hello World! Thread ID la " << threadid << endl; 
   pthread_exit(NULL);
   return 0;
}int main ()
{
   pthread_t threads[SO_THREAD]; 
   int rc;cerr << "----" << __LINE__ << endl;
   int i;cerr << "----" << __LINE__ << endl;
   for( i=0; i < SO_THREAD; i++ ){
      cout << "\nmain() : dang tao thread! " << i << endl; 
      rc = pthread_create(&threads[i], NULL, 
                          InLoiChao, (int *)i);
      cout << endl;
      cout << "rc = " << rc << endl;
      if (rc){
         cout << "\nError: Khong the tao thread!" << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}