// Last updated: 10/10/2025, 12:10:15 AM
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size(), m = mana.size();
        long long sumSkill = 0;
        for (int s : skill) sumSkill += s;
        long long prevWizardDone = sumSkill * 1LL * mana[0];
        for (int j = 1; j < m; ++j) {
            long long prevPotionDone = prevWizardDone;
            for (int i = n - 2; i >= 0; --i) {
                prevPotionDone -= 1LL * skill[i + 1] * mana[j - 1];
                prevWizardDone = max(prevPotionDone, prevWizardDone - 1LL * skill[i] * mana[j]);
            }
            prevWizardDone += sumSkill * 1LL * mana[j];
        }
        return prevWizardDone;
    }
};
