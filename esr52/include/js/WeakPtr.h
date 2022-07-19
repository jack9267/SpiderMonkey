
#ifndef __js_WeakPtr_h
#define __js_WeakPtr_h

namespace JS {

class JS_PUBLIC_API(WeakObject)
{
  public:
    WeakObject(JSObject* pObject);
    ~WeakObject();

    void clear();
    JSObject* get();

  private:
    void* ptr;
};

} /* namespace JS */

#endif  /* js_WeakPtr_h */
