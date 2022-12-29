#include"Form.hpp"
Form::Form(): grade_to_sign(0),grade_to_exec(0){
    is_sign = 0;
    if_exec = 0;
}
Form::~Form(){
    
}
Form::Form(std::string name,bool is_sign,int grade_to_sign,int grade_to_exec) : name(name),grade_to_sign(grade_to_sign),grade_to_exec(grade_to_exec){
    is_sign = 0;
    if_exec = 0;
    if(grade_to_sign > 150)
        throw(Form::GradeTooLowException());
    if (grade_to_sign < 1)
        throw(Form::GradeTooHighException());
}
std::string Form::getName()const{
    return(name);
}
bool Form::getIs_sign()const{
    return(is_sign);
}
int Form::getGrade_to_sign() const{
    return (grade_to_sign);
}
int Form::getGrade_to_exec()const{
    return(grade_to_exec);
}

std::ostream& operator<<(std::ostream& o,const Form& obj){
    std::cout<<obj.getName() << " ,is sign " << obj.getIs_sign() << " ,grade to sign "<<obj.getGrade_to_sign() <<" ,grade to exec" << obj.getGrade_to_exec() << std::endl;
    return (o);
}

int Form::getIf_exec()const{
    return(if_exec);
}

void Form::beSigned(const Bureaucrat& obj){
    if(obj.getGrade() <= grade_to_sign)
    {
        is_sign = 1;
    }
    else
        throw(Form::GradeTooLowException());
}// db hna 3andi burraucrat ila t7a9e9o requirment bach ysini l form ghadi ysuniha , obach ysiniha khass l grade dyalo ykoun sgher men lgrade dyal l form wla equal .
