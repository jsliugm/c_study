#include <stdio.h>

struct Student {
    int num;
    char sex;
    char name[1];
};

int main() {
    printf("sizeof(Student)=%d\n",sizeof(struct Student));
    struct Student a = {1, 'M',"a"};

    struct Student b ;

    b = (struct Student){1,'F',"b"};

    printf("b.num = %d\n",b.num);

    printf("a.num=%d\n", a.num);

    printf("&a = %x\n",&a);
    printf("&a.num = %x\n",&a.num);
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof a = %d\n", sizeof(a));

    struct Student *p;
    p=&b;

    printf("*p.num=%d\n",(*p).num);


    printf("p->num=%d\n",p->num);

    return 0;
}
