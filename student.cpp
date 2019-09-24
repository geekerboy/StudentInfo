#include "student.h"


void  Student::Average_score_single() {
    int32_t average_score=0,sum=0;
    for(int32_t i=0;i<5;++i){
        sum+=language_score_[i];//计算语文平均分
    }
    average_score=sum/5;
    std::cout<<"语文平均分为： "<<average_score<<std::endl;
    for(int32_t i=0;i<5;++i){
        sum+=math_score_[i];//计算数学平均分
    }
    average_score=sum/5;
    std::cout<<"数学平均分为： "<<average_score<<std::endl;


}

void Student::Average_score_all() {

}

void Student::Max_score() {

}

void Output_info(Student stu) {

}



