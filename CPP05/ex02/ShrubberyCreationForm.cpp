/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:21:30 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/29 12:09:37 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrub..",0,145,137), target("No value"){
    
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrub..",0,145,137),target(target){
    
};

std::string ShrubberyCreationForm::getTarget()const
{
    return(target);
}

void ShrubberyCreationForm::tree_ascii()const{
    std :: ofstream id(getTarget() + "_shrubbery");
    id<<"                                                        ,"<<std::endl;
    id<<"                                            .__ ._       \\_.         ,"<<std::endl;
    id<<"                                     _, _.  '  \\/   \\.-  /     ,"<<std::endl;
    id<<"                                      \\/     .-_`   // |/     \\, "<<std::endl;
    id<<"                     .-""""-.          \\.   '   \\`. ||  \\.-'  /       "<<std::endl;
    id<<"                    F        Y        .-.`-(   _/\\ V/ \\//,-' >-'   ._,"<<std::endl;
    id<<"                   F          Y   .__/   `. \\.   ' J   ) ./  / __._/ "<<std::endl;
    id<<"                  J         \\, I    '   _/ \\  \\  | |  / /  .'-'.-' `._,"<<std::endl;
    id<<"           (       L   \\_.--.| \\_.      ' .___ `\\: | / .--'.-'''      ,"<<std::endl;
    id<<"         \\ '\\    .  L   /    \\/        ._/`-.`  \\ .'.' .'---./__   ' "<<std::endl;
    id<<"    \\__  '\\ ) \\._/   `-.__. ` \\_. '   .---.  \\     /  /  ,   `  `  "<<std::endl;
    id<<"  --'  \\  ): // \\,            `-.`__.'     `- \\  /   / _/-.---.__.- . "<<std::endl;
    id<<"     _.-`.'/ /'\\_, ._     >--.-""'____.--""`_     '   /.'..' \\   \\   _/`"<<std::endl;
    id<<" _ .---._\\ \'/ '__./__.-..  / .-|(    x_.-'___  |   :' /    _..---_' \""<<std::endl;
    id<<" .:' /`\\ `. `..'.--'\\      /.' /`-`._  `-,'   ` '   I '_.--'__--..___.--._.-"<<std::endl;
    id<<"     `  `. `\\/'/  _.   _.-'      _.____./ .-.--""-. .-\"    ' _..-.---'   \""<<std::endl;
    id<<"  -._ .--.\\ / /-./     /   .---'-//.___. .-'       \\__ .--.  `    `.     '`-"<<std::endl;
    id<<" ,--'/.-. ^.   .-.--.  ` _/    _//     ./   _..   .'  `.    \\ \\    |_."<<std::endl;
    id<<"    /' | >.   ' | \\._.-       '    _..'  `.' . `.       )    | |\\  `  "<<std::endl;
    id<<"  ./ \\ \'  ) c| /  \\     \\_..  .--'    ,\\ \\_/`  :    )  (`-. `.|`\\ "<<std::endl;
    id<<"   \'  / ,-.  | ` ./`  ._/ `\\'.--.,-((  `.`.__ |   _/   \\    |)  `--._/` "<<std::endl;
    id<<"______'\\   |  < __________  //'  //  _)   )/-._`.  (,-')  )  / \\_.    /\\. _____"<<std::endl;
    id<<"a:f        |  |        .__./    //  '\\  |//    `.\\ '\\ (  (  <`   ._  '"<<std::endl;
    id<<"           >  |      _.  /   ..-\\ _    _/ \\_.  \\ `\\    \\_ `---.-'__   "<<std::endl;
    id<<"        . /  `-   _.'        /   `   _/|       J  /`     `-,,-----.`-."<<std::endl;
    id<<"            '  .:'          '`      '          < `   f  I //        `�\\_,"<<std::endl;
    id<<"              '                         \\.     J        I/\\_.        ./"<<std::endl;
    id<<"         __/                            `:     I  .:    K  `          `"<<std::endl;
    id<<"         \\/ )                            `,   J         L             "<<std::endl;
    id<<"          )_(_                             .  F  .-'    J             "<<std::endl;
    id<<"         /    `.                           .  I  (.   . I _.-.._      "<<std::endl;
    id<<"   '    <'    \\ )                     _.---.J/      :'   L -'         "<<std::endl;
    id<<" .:.     \\. _.->/                        _.-'_.)     ` `-.`---.,_.    "<<std::endl;
    id<<":<        (    \\                    .--""   .F' J) `.`L.__`-.___      "<<std::endl;
    id<<".:        |-'\\  \\_.|                          Y ..Z     ))   `--'  `-    "<<std::endl;
    id<<".         ) | > :                            . '    :'                "<<std::endl;
    id<<"          / ) L_J                            .x,."<<std::endl;
    id<<"          L_J .,                             .:<.,  "<<std::endl;
    id<<"        .'`   `                               :J.,` "<<std::endl;
    id<<"                                           . ;.+K,:."<<std::endl;
    id<<"                                               .,L+., "<<std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & obj) const{
     if(getIs_sign() == true && obj.getGrade() <= getGrade_to_exec() )
     {
        tree_ascii();
        std::cout<<obj.getName() << " excute the " << getName();
     }
    else 
        throw(Form::GradeTooLowException());
}
