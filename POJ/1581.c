#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TEAM_NAME_SIZE 50
#define NUM_PROBLEMS 4

struct team {
	char name[MAX_TEAM_NAME_SIZE];
	int solved;
	int penalty;
};

struct team initTeam(char name[MAX_TEAM_NAME_SIZE]) {
	struct team newTeam;

	strcpy(newTeam.name, name);
	newTeam.solved = 0, newTeam.penalty = 0;

	return newTeam;
}

void processPair(struct team* currentTeam, int submissionTimes, int correctOneTime) {
	if(correctOneTime == 0)
		return;
	else {
		currentTeam->solved++;
		currentTeam->penalty += correctOneTime + 20 * (submissionTimes - 1);
	}
}

void processSubmissions(struct team* currentTeam, int* data) {

	processPair(currentTeam, *(data + 0), *(data + 1));
	processPair(currentTeam, *(data + 2), *(data + 3));
	processPair(currentTeam, *(data + 4), *(data + 5));
	processPair(currentTeam, *(data + 6), *(data + 7));

}

struct team bestTeam(struct team t1, struct team t2) {
	if(t1.solved > t2.solved)
		return t1;
	else if(t2.solved > t1.solved)
		return t2;
	else 
		return (t1.penalty < t2.penalty) ? t1 : t2;
}

void displayTeam(struct team currentTeam) {
	printf("%s %d %d\n", currentTeam.name, currentTeam.solved, currentTeam.penalty);
}

int main(int argc, char const *argv[]) {

	int numTeams, i = 0;
	int* data = (int*) malloc(sizeof(int) * 8);
	char name[MAX_TEAM_NAME_SIZE];

	struct team winner = initTeam("DUMMY");

	scanf("%d", &numTeams);

	while(numTeams--) {

		scanf("%s", name);
		struct team currentTeam = initTeam(name);

		for(i = 0; i < NUM_PROBLEMS * 2; i++)
			scanf("%d", (data + i));

		processSubmissions(&currentTeam, data);
		winner = bestTeam(winner, currentTeam);
	}

	displayTeam(winner);

	return 0;
}