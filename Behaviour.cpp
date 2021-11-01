#include "Behaviour.h"

glm::vec2 Behaviour::Execute() {
	// like getSteeringForce
}

void Behaviour::Enter() {
	
}

void Behaviour::Exit() {
	m_Agent->ChangeState(? );
}

// seek

void SeekBehaviour::Enter() {

}

glm::vec2 SeekBehaviour::Execute() {
	// search for targets
	// find a target?
	glm::vec2 targetVec = (target->position - this->position);
	return targetVec;
}

// path following

void PathFollowingBehaviour::Enter() {

}

glm::vec2 PathFollowingBehaviour::Execute() {
	
	if (this->CurrentPathNode != NULL) {
		//TODO: this assumes linked list path node structure.
	//		if we don't have this, need a more sophisticated way to know the "next" node
		glm::vec2 targetVec = (this->CurrentPathNode->NextNode->position() - this->position);
		return targetVec;
	}
	else {
		glm::vec2 closestPathNode = NULL;
		float closestDist = 0;
		for (glm::vec2 pathNode : this->PathNodes()) {
			float pathDist = (pathNode - this->position).Length2;
			if (closestPathNode == NULL || pathDist < closestDist) {
				closestPathNode = pathNode;
				closestDist = pathDist;
			}
		}
		if (closestPathNode == NULL) {
			return glm::vec2.VecZero;
		}
		glm::vec2 targetVec = (ClosestPathNode - this->position);
		return targetVec;
	}
	
}