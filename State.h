#pragma once
class State {
	private Agent* m_Agent;
	private World* m_World;
public:
	void Enter();
	void Execute();
	void Exit();
};

class PatrolState : State {

public:
	void Enter();
	void Execute();
	void Exit();
};

class ChaseState : State {

public:
	void Enter();
	void Execute();
	void Exit();
};

class SearchState : State {

public:
	void Enter();
	void Execute();
	void Exit();
};