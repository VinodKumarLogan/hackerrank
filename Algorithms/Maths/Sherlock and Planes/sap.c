#include <stdio.h>
typedef struct {
    int x,y,z;
}point;

int dotProduct(point p, point q) {
    return (p.x*q.x)+(p.y*q.y)+(p.z*q.z);
}
point crossProduct(point p, point q) {
    point r;
    r.x = (p.y*q.z) - (q.y*p.z);
    r.y = (q.x*p.z) - (q.z*p.x);
    r.z = (p.x*q.y) - (p.y*q.x);
    return r;
}
void sherlockAndPlanes(point m, point n, point o, point p) {
    point u,v,w;

    u.x = n.x - m.x;
    u.y = n.y - m.y;
    u.z = n.z - m.z;
    
    v.x = p.x - o.x;
    v.y = p.y - o.y;
    v.z = p.z - o.z;
    
    w.x = o.x - m.x;
    w.y = o.y - m.y;
    w.z = o.z - m.z;
    
    if(!dotProduct(w,crossProduct(u,v)))
        printf("YES\n");
    else
        printf("NO\n");
}
int main() {
    int T;
    point a,b,c,d;
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d%d",&a.x,&a.y,&a.z);
        scanf("%d%d%d",&b.x,&b.y,&b.z);
        scanf("%d%d%d",&c.x,&c.y,&c.z);
        scanf("%d%d%d",&d.x,&d.y,&d.z);
        sherlockAndPlanes(a,b,c,d);
    }
    return 0;
}