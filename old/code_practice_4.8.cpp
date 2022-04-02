#include <iostream>
using namespace std;

typedef struct{
	int xpos;
	int ypos;
}position;

int main(void) {
	int count;
	int xpos;
	int ypos;
	int max = 0;
	int val_left;
	int val_right;
	cin >> count;

	position* pos = new position[count];

	for (int i = 0; i < count; i++) {
		cin >> xpos >> ypos;
		pos[i].xpos = xpos;
		pos[i].ypos = ypos;
	}

	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			val_left = pos[i].xpos - pos[j].xpos;
			val_right = pos[i].ypos - pos[j].ypos;

			if (val_left < 0)
				val_left = val_left* (-1);
			if (val_right < 0)
				val_right = val_right* (-1);

			if (max < val_left + val_right)
				max = val_left + val_right;
		}
	}

	delete[]pos;
	cout << max << endl;
	return 0;
}