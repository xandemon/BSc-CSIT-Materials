/*21. Create a Structure Time (Hour, Minute, Second) and then create two time variable T1(1,20,40) and T2(2,30,50),
and add them by sorting sum */ 

#include <stdio.h>

struct time{
    int hour;
    int minute;
    int second;
};
struct time sum(struct time t1, struct time t2);
int main(){
        struct time t1 = {1,20,40};
        struct time t2 ={2,30,50};
        struct time t;
        t=sum(t1,t2);
        printf("Total time:%d:%d:%d",t.hour,t.minute,t.second);
        return 0;
    }
struct time sum(struct time t1, struct time t2){
        struct time temp;
        temp.second=t1.second+t2.second;
        temp.minute = t1.minute+t2.minute;
        temp.hour = t1.hour+t2.hour;
        while (temp.second>60)
        {
           temp.second = temp.second-60;
           temp.minute = temp.minute+1;
        }
         while (temp.minute>60)
        {
           temp.minute = temp.minute-60;
           temp.hour = temp.hour+1;
        }
        return temp;
    }
