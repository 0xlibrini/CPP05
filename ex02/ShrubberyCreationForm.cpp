#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("ShurbberyCreationForm" , 145, 137)
{

}
void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
   if(getIsSigned() && bureaucrat.getGrade() <= 137)
   {
      char const *File = target.c_str();
      std::ofstream file(File);
      file << "       /\\\n";
      file << "      /**\\\n";
      file << "     /****\\\n";
      file << "    /******\\\n";
      file << "   /********\\\n";
      file << "      ||  ||\n";
      file << "      ||  ||\n";
      file.close();
   }
   else
      throw  ShrubberyCreationForm::GradeTooLowException(); 
}