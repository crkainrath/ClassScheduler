#include "Course.hpp"
#include "Section.hpp"
#include "Parser.hpp"

using std::iostream;
using std::ifstream;
using namespace std;
int main(){
    Parser parse; 
	Course cs125("CS", "125");
	std::vector<Section*> sections = parse.getAll();
	
    for (int i = 0; i < (int)sections.size(); i++) {
        //cout << *sections[i] << endl;
		cs125.addSection(sections[i]);
    }
	std::vector<SectionCombo*> combos = cs125.getCombos();	
	std::cout << combos.size() << " Combos Generated" << std::endl;
	for(std::vector<SectionCombo*>::const_iterator it = combos.begin(); it != combos.end(); it++){
		std::cout << "=== New Combo ===" << std::endl;
		std::vector<Section*> sections = (*it)->getSections();
		for(std::vector<Section*>::const_iterator is = sections.begin(); is != sections.end(); is++){
			std::cout << (*is)->getSectionName() <<std::endl;
		}
	}


    return 0;
}
