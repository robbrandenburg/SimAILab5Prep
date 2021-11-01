#include "Agent.h"


void Agent::Update(float pTimestep) {

}

bool Agent::CanSeeTarget(Target* target) {
	glm::vec2 vecA = this->velocity;
	glm::vec2 vecB = target->position - this->position
		float dotProduct = glm::dotProduct(vecA, vecB);
	// A dot B = |A||B| cos theta
	float AMag = vecA.magnitude;
	float BMag = vecB.magnitude;
	float cosVal = dotProduct / (AMag * BMag);
	// TODO: will it be radians or degrees?
	float angle = glm::arcCos(cosVal);
	return Mathf.abs(angle) < MAX_VISION_ANGLE;
}