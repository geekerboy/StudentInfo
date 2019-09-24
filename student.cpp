#include "student.h"


void  Student::Average_score() {
    int32_t average_score=0,average_score1=0,sum=0;
    for(int32_t i=0;i<5;++i){
        sum+=language_score_[i];//计算语文平均分
    }
    average_score=sum/5;
    std::cout<<"the average of language is： "<<average_score<<std::endl;
    for(int32_t i=0;i<5;++i){
        sum+=math_score_[i];//计算数学平均分
    }
    average_score1=sum/5;
    std::cout<<"the average of math is： "<<average_score1<<std::endl;
    average_score+=average_score1;
    std::cout<<"the total average is： "<<average_score<<std::endl;
}

void Student::Max_score() {
    int32_t maxscore=0,id=0,sum[5];
    maxscore=sum[0];
    for(int32_t i=0;i<5;++i){
        sum[i]=language_score_[i]+math_score_[i];
    }
    for(int32_t i=0;i<4;++i){
        maxscore=(sum[i]>=sum[i+1] ? sum[i] ,id=i: sum[i+1],id=i+1);
    }
    std::cout<<"the maxscore is "<<student_name_[id]<<",his id is "<<id<<",his language score is ";
    std::cout<<language_score_[id]<<",his math score is "<<math_score_[id]<<std::endl;
}

void Output_info(Student stu) {
    int32_t id=0;
    std::cout<<"enter the student id you want to show the info"<<std::endl;
    std::cout<<"the id you input should between 1-5"<<std::endl;
    std::cin>>id;
    while(id<1||id>5){
        std::cout<<"the id you input should between 1-5"<<std::endl;
        std::cout<<"enter the student id again"<<std::endl;
        std::cin>>id;
    }
    std::cout<<"the student name is "<<stu.student_name_[id-1]<<",his id is "<<id;
    std::cout<<",his language is " <<stu.language_score_[id-1]<<",his math is ";
    std::cout<<stu.math_score_[id-1]<<std::endl;

}



