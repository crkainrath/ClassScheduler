#include "SectionCombo.hpp"
namespace CourseInfo{
	SectionCombo::SectionCombo(){
		this->_isValid = false;
	}
	
	void SectionCombo::addSection(Section* section){
		if(section == NULL){
			return;	
		}
		this->_sections.push_back(section);
	}
}