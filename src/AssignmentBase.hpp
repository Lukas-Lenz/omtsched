#ifndef OMTSCHED_ASSIGNMENTBASE_H
#define OMTSCHED_ASSIGNMENTBASE_H

#include "Assignment.h"
#include "Component.h"

namespace omtsched {

	template<typename ID>
	class AssignmentBase {

		std::vector<ID> components;

		public void addComponent(std::initializer_list<const Component> component) 
		{
			
		}

	};

}


#endif