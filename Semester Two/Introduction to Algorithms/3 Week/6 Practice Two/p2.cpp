/*
    || You are given n elements numbered from 1 to n. Initially, each element is in its own group. You need to process k queries. Each query is one of the following types: UNION x z – Merge the groups that contain elements x and z. After this operation, both elements will belong to the same group. FIND x – Output the ultimate representative of the group containing element x. The representative is the element that acts as the "leader" of the group. Initially, every element is the leader of its own group.
*/

/*Complete the functions below*/
// int find(int par[], int x) {
//     if(par[x] == x)
//         return x;
    
//     int leader = find(par, par[x]);
//     par[x] = leader;
    
//     return leader;
// }

// void unionSet(int par[], int x, int z) {
//     int leaderA = find(par, x);
//     int leaderB = find(par, z);
    
//     if(leaderA != leaderB)
//     {
//         par[leaderA] = leaderB;
//     }
// }