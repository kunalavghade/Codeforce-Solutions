#define ll long long

struct LezzySegTree{
  vector<T> seg;
  vector<U> lazy;
  ll n;
  T element;
  U updateIdentity;

  LezzySegTree(ll n, T element, U updateIdentity) {
    this->n = n;
    this->element = element;
    this->updateIdentity = updateIdentity;
    st.assing(4*n, element);
    lazy.assing(2*n, updateIdentity);
  }

  T combine(T l, T r) {
    // add logic to add two elements
    // ex : T ans = (l+r)
    return ans;
  }

  void build(ll idx, ll l,  ll r, vector<T> &A) {
    if(l == r) {
      seg[idx] = A[l];
      return;
    }
    ll mid =  (l+r) >> 1;
    build(2*idx + 1, l, mid, A);
    build(2*idx + 2, mid+1, r, A);
    seg[idx] =  combine(seg[2*idx+1], seg[2*idx+2]);
  }

  T apply(T curr, U upd, ll l, ll r) {
     // update apply logic
     T ans = (r-l+1) * upd;
     return ans;
  }

  U combineUpdate( U oldUpd, U newUpd, ll l, ll r) {
    U ans = oldUpd;
    ans = newUpd;
    return ans;
  }

  void push_down(ll idx, ll l, ll r) {
    if(lazy[idx] == updateIdentity) return;
    seg[idx] = apply(seg[idx], lazy[idx], l, r);
    if(2*idx + 2 < 2*n) {
      ll mid = (l+r)>>1;
      lazy[2*idx+1] = combineUpdate(lazy[2*idx+1], lazy[idx], l, mid);
      lazy[2*idx+2] = combineUpdate(lazy[2*idx+2], lazy[idx], mid+1, r);
    }
    lazy[idx] = updateIdentity;
  }

  T query(ll idx, ll l, ll r, ll findl, ll findr) {
    push_down(idx, l, r);
    if(findl > findr) return element;
    if(findr < l or findl > r) return element;
    if(findl <= l and findr>=r) return seg[v];
    ll mid = (l+r) >> 1;
    return combine(query(2*idx +1, l, mid , findl, findr), query(2*idx+2, mid+1, r, findl, findr));
  }

  void update(ll idx, ll l, ll r, ll findl, ll findr, U upd) {
    push_down(idx, l, r);
    if(r < findl or l > findr) return;
    if(l >= findl and  r<= findr) {
      lazy[idx] = combineUpdate(lazy[idx], upd, l, r);
      push_down((idx, l, r));
    }
    else {
      ll mid = (r+l)>>1;
      update(2*idx+1, l, mid, findl, findr, upd);
      update(2*idx+2, mid+1, r, findl, findr, upd);
      seg[idx] = combine(seg[2*idx+1], seg[2*idx+2]);
    }
  }

  void build(vector<T> A) {
    assert(sz(a) == n);
    build(0, 0, n-1, A);
  }

  T query(ll l, ll r) {
    return query(0, 0, n-1, l, r);
  }
  
  void update(ll l, ll r, U upd) {
    update(0, 0, n-1, l, r, upd);
  }
};
