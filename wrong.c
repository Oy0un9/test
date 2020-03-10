#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
  char a[20] = "172.16.33.40";
  char b[20];
  int len;
  int i;
  bool flag=true;
  printf("Input your ip:\n");
  scanf("%s",b);
  //len = strlen(a);

  for(i=0;i<strlen(a);i++){
    if(a[i]!=b[i])
      flag=false;}
  if(flag)
    printf("ok\n");
  else
    printf("wrong\n");
  return 0;
}
