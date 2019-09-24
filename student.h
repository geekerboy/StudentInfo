#pragma once

#include <iostream>
#include <string>



class Student{
public:
    void Average_score();
    void Max_score();
    friend void Output_info(Student stu);

private:
    int32_t  const student_id_[5]={1,2,3,4,5};
    std::string  student_name_[5]={"zhao","qian","sun","li","zhou"};
    int32_t  language_score_[5]={10,20,30,40,50};
    int32_t  math_score_[5]={21,31,41,51,61};
};