#include "student.h"


void  Student::Average_score_single() {
    int32_t average_score=0,sum=0;
    for(int32_t i=0;i<5;++i){
        sum+=language_score_[i];//��������ƽ����
    }
    average_score=sum/5;
    std::cout<<"����ƽ����Ϊ�� "<<average_score<<std::endl;
    for(int32_t i=0;i<5;++i){
        sum+=math_score_[i];//������ѧƽ����
    }
    average_score=sum/5;
    std::cout<<"��ѧƽ����Ϊ�� "<<average_score<<std::endl;


}

void Student::Average_score_all() {

}

void Student::Max_score() {

}

void Output_info(Student stu) {

}



