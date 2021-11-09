#ifndef SUPERLATIVES
#define SUPERLATIVES

template <typename STATETYPE, typename VALTYPE> class Superlatives {
public:
  Superlatives() : valid(false){};
  void AddSate(STATETYPE state, VALTYPE val) {
    if (valid) {
      if (val > maxVal) {
        maxVal = val;
        maxState = state;
      } else if (val < minVal) {
        minVal = val;
        minState = state;
      }
    } else {
      minVal = val;
      maxVal = val;
      minState = state;
      maxState = state;
      valid = true;
    }
  };
  VALTYPE MaxVal() const { return maxVal; }
  VALTYPE MinVal() const { return minVal; }
  const STATETYPE &MaxState() const { return maxState; }
  const STATETYPE &MinState() const { return minState; }
  bool IsValid() const { return valid; }

private:
  STATETYPE maxState;
  STATETYPE minState;

  VALTYPE maxVal;
  VALTYPE minVal;

  bool valid;
};

#endif // SUPERLATIVES
