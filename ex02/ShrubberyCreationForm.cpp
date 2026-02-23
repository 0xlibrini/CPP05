#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
   this->target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
      if( this != &form)
      {
         AForm::operator=(form);
         this->target = form.target;
      }
   return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string n): AForm("ShurbberyCreationForm", 145, 137)
{
   target = n + "_shurberry";
}

void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
   try
   {
      if(getIsSigned() && bureaucrat.getGrade() <= 137)
      {
         char const *File = target.c_str();
         std::ofstream file(File);
         file << "                      ___" << std::endl;
         file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
         file << "             ,-'          __,,-- \\" << std::endl;
         file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
         file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
         file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
         file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
         file << "     (     ,-'                  `." << std::endl;
         file << "      `._,'     _   _             ;" << std::endl;
         file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
         file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
         file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
         file << "                \"Hb HH dF" << std::endl;
         file << "                 \"HbHHdF" << std::endl;
         file << "                  |HHHF" << std::endl;
         file << "                  |HHH|" << std::endl;
         file << "                  |HHH|" << std::endl;
         file << "                  |HHH|" << std::endl;
         file << "                  |HHH|" << std::endl;
         file << "                  dHHHb" << std::endl;
         file << "                .dFd|bHb.               o" << std::endl;
         file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
         file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
         file << "##########################################" << std::endl;
         file.close();
      }
      else
         throw  ShrubberyCreationForm::GradeTooLowException(); 
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
}