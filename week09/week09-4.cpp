class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];///�̤j�ȡA���̫e������w�]��
        int min = salary[0];///�̤p�ȡA���̫e������w�]��
        double total = 0;
        for(int i=0; i<salary.size(); i++){
            if(salary[i]>max) max = salary[i];///��̤j���٤j
            if(salary[i]<min) min = salary[i];///��̤p���٤p
            total += salary[i];
        }
        return (total - max - min) / (salary.size()-2);
    }
};
