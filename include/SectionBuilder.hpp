#ifndef SECTIONBUILDER_H
#define SECTIONBUILDER_H
#include "Section.hpp"
#include "Semester.hpp"
#include "Week.hpp"
#include <vector>
class Section::SectionBuilder{
	public:
		SectionBuilder();

		Section* buildSection();

		void 	setSectionName(std::string name);
		void 	setSectionType(std::string type);
		void 	setDescription(std::string description);
		void 	setCRN(std::string crn);

		void 	setInstructorName(std::string instructor);

		void 	setStartTime(Section::Week::Day day, int hour, int minute);
		void 	setEndTime(Section::Week::Day day, int hour, int minute);

		void 	setSemesterStart(int day, int month, int year);
		void 	setSemesterEnd(int day, int month, int year);

		void 	setSemsterYear(std::string year);
		void 	setSemesterSeason(std::string season);
		void 	setSemesterName(std::string name);

		void 	setLocationLat(double lat);
		void 	setLocationLon(double lon);
		void 	setLocationBuilding(std::string name);
		void 	setLocationRoom(std::string room);

	private:
		bool 	validateInput();		
		/*
		 * Section Info
		 */
		std::string 	_sectionName;
		std::string 	_sectionType;
		std::string 	_description;
		std::string 	_crn;
		/*
		 * Instructor
		 */
        std::vector<std::string> _instructorName;	

		/*
		 * Week
		 * Organized by [monday, tuesday, ...][start, end][hour, minute]
		 */
		int _weekTimes[ Section::Week::DAYSINWEEK ][ Section::Week::DAYSINWEEK ][ 2 ];


		/*
		 * Semester
		 * Organized by [day][month][year]
		 */
		int 		_semesterStartDate[ Section::Semester::NUMOFDATESPECIFIER ];
		int 		_semesterEndDate[ Section::Semester::NUMOFDATESPECIFIER ];
		std::string 			_semesterYear;
		std::string 			_semesterSeason;
		std::string 			_semesterName;


	
		/*
		 * Location
		 */
		double 	_locationLat;
		double 	_locationLon;
		std::string 	_locationBuildingName;
		std::string 	_locationRoomNumber;
};
#endif
