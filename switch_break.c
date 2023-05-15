#include <stdio.h>
main(){

  int a;
  printf("자신이 좋아하는 과일의 번호를 입력해주세요.\n");
  printf("1: 사과, 2: 키위, 3:복숭아, 4:수박, 0: 모두 좋아하지 않는다.\n");

  scanf("%d", &a);

  switch(a){
    
    case 1:
    printf("사과를 좋아하는군요!\n");
break;
    case 2:
    printf("키위를 좋아하는군요!\n");
break;
    case 3:
    printf("복숭아를 좋아하는군요!\n");
break;
    case 4:
    printf("수박을 좋아하는군요!\n");
break;
    default:
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요.\n");
  }
  printf("좋아하는 과일 조사 끝");
}