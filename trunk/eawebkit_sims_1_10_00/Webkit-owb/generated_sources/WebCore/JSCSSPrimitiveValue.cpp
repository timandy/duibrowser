/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSCSSPrimitiveValue.h"

#include <wtf/GetPtr.h>

#include "CSSPrimitiveValue.h"
#include "Counter.h"
#include "JSCounter.h"
#include "JSRGBColor.h"
#include "JSRect.h"
#include "KURL.h"
#include "Rect.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSPrimitiveValueTableValues[3] =
{
    { "primitiveType", (intptr_t)JSCSSPrimitiveValue::PrimitiveTypeAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSPrimitiveValue::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSPrimitiveValueTable = { 1, JSCSSPrimitiveValueTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSPrimitiveValueConstructorTableValues[27] =
{
    { "CSS_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "CSS_NUMBER", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_PERCENTAGE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_EMS", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "CSS_EXS", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "CSS_PX", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "CSS_CM", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "CSS_MM", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "CSS_IN", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "CSS_PT", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "CSS_PC", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "CSS_DEG", (intptr_t)11, DontDelete|ReadOnly, 0 },
    { "CSS_RAD", (intptr_t)12, DontDelete|ReadOnly, 0 },
    { "CSS_GRAD", (intptr_t)13, DontDelete|ReadOnly, 0 },
    { "CSS_MS", (intptr_t)14, DontDelete|ReadOnly, 0 },
    { "CSS_S", (intptr_t)15, DontDelete|ReadOnly, 0 },
    { "CSS_HZ", (intptr_t)16, DontDelete|ReadOnly, 0 },
    { "CSS_KHZ", (intptr_t)17, DontDelete|ReadOnly, 0 },
    { "CSS_DIMENSION", (intptr_t)18, DontDelete|ReadOnly, 0 },
    { "CSS_STRING", (intptr_t)19, DontDelete|ReadOnly, 0 },
    { "CSS_URI", (intptr_t)20, DontDelete|ReadOnly, 0 },
    { "CSS_IDENT", (intptr_t)21, DontDelete|ReadOnly, 0 },
    { "CSS_ATTR", (intptr_t)22, DontDelete|ReadOnly, 0 },
    { "CSS_COUNTER", (intptr_t)23, DontDelete|ReadOnly, 0 },
    { "CSS_RECT", (intptr_t)24, DontDelete|ReadOnly, 0 },
    { "CSS_RGBCOLOR", (intptr_t)25, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSPrimitiveValueConstructorTable = { 8191, JSCSSPrimitiveValueConstructorTableValues, 0 };

class JSCSSPrimitiveValueConstructor : public DOMObject {
public:
    JSCSSPrimitiveValueConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSPrimitiveValuePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSPrimitiveValueConstructor::s_info = { "CSSPrimitiveValueConstructor", 0, &JSCSSPrimitiveValueConstructorTable, 0 };

bool JSCSSPrimitiveValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValueConstructor, DOMObject>(exec, &JSCSSPrimitiveValueConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValueConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSPrimitiveValuePrototypeTableValues[34] =
{
    { "CSS_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "CSS_NUMBER", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_PERCENTAGE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_EMS", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "CSS_EXS", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "CSS_PX", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "CSS_CM", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "CSS_MM", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "CSS_IN", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "CSS_PT", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "CSS_PC", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "CSS_DEG", (intptr_t)11, DontDelete|ReadOnly, 0 },
    { "CSS_RAD", (intptr_t)12, DontDelete|ReadOnly, 0 },
    { "CSS_GRAD", (intptr_t)13, DontDelete|ReadOnly, 0 },
    { "CSS_MS", (intptr_t)14, DontDelete|ReadOnly, 0 },
    { "CSS_S", (intptr_t)15, DontDelete|ReadOnly, 0 },
    { "CSS_HZ", (intptr_t)16, DontDelete|ReadOnly, 0 },
    { "CSS_KHZ", (intptr_t)17, DontDelete|ReadOnly, 0 },
    { "CSS_DIMENSION", (intptr_t)18, DontDelete|ReadOnly, 0 },
    { "CSS_STRING", (intptr_t)19, DontDelete|ReadOnly, 0 },
    { "CSS_URI", (intptr_t)20, DontDelete|ReadOnly, 0 },
    { "CSS_IDENT", (intptr_t)21, DontDelete|ReadOnly, 0 },
    { "CSS_ATTR", (intptr_t)22, DontDelete|ReadOnly, 0 },
    { "CSS_COUNTER", (intptr_t)23, DontDelete|ReadOnly, 0 },
    { "CSS_RECT", (intptr_t)24, DontDelete|ReadOnly, 0 },
    { "CSS_RGBCOLOR", (intptr_t)25, DontDelete|ReadOnly, 0 },
    { "setFloatValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionSetFloatValue, DontDelete|Function, 2 },
    { "getFloatValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionGetFloatValue, DontDelete|Function, 1 },
    { "setStringValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionSetStringValue, DontDelete|Function, 2 },
    { "getStringValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionGetStringValue, DontDelete|Function, 0 },
    { "getCounterValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionGetCounterValue, DontDelete|Function, 0 },
    { "getRectValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionGetRectValue, DontDelete|Function, 0 },
    { "getRGBColorValue", (intptr_t)jsCSSPrimitiveValuePrototypeFunctionGetRGBColorValue, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSPrimitiveValuePrototypeTable = { 8191, JSCSSPrimitiveValuePrototypeTableValues, 0 };

const ClassInfo JSCSSPrimitiveValuePrototype::s_info = { "CSSPrimitiveValuePrototype", 0, &JSCSSPrimitiveValuePrototypeTable, 0 };

JSObject* JSCSSPrimitiveValuePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSCSSPrimitiveValue.prototype]]");
    return KJS::cacheGlobalObject<JSCSSPrimitiveValuePrototype>(exec, prototypeIdentifier);
}

bool JSCSSPrimitiveValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSCSSPrimitiveValuePrototype, JSObject>(exec, &JSCSSPrimitiveValuePrototypeTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValuePrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSCSSPrimitiveValue::s_info = { "CSSPrimitiveValue", &JSCSSValue::s_info, &JSCSSPrimitiveValueTable , 0 };

JSCSSPrimitiveValue::JSCSSPrimitiveValue(JSObject* prototype, CSSPrimitiveValue* impl)
    : JSCSSValue(prototype, impl)
{
}

bool JSCSSPrimitiveValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSPrimitiveValue, Base>(exec, &JSCSSPrimitiveValueTable, this, propertyName, slot);
}

JSValue* JSCSSPrimitiveValue::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case PrimitiveTypeAttrNum: {
        CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(impl());
        return jsNumber(exec, imp->primitiveType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCSSPrimitiveValue::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[CSSPrimitiveValue.constructor]]");
    return KJS::cacheGlobalObject<JSCSSPrimitiveValueConstructor>(exec, constructorIdentifier);
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionSetFloatValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned short unitType = args[0]->toInt32(exec);
    float floatValue = args[1]->toFloat(exec);

    imp->setFloatValue(unitType, floatValue, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionGetFloatValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned short unitType = args[0]->toInt32(exec);


    KJS::JSValue* result = jsNumber(exec, imp->getFloatValue(unitType, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionSetStringValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned short stringType = args[0]->toInt32(exec);
    const UString& stringValue = args[1]->toString(exec);

    imp->setStringValue(stringType, stringValue, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionGetStringValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    KJS::JSValue* result = jsString(exec, imp->getStringValue(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionGetCounterValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getCounterValue(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionGetRectValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getRectValue(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsCSSPrimitiveValuePrototypeFunctionGetRGBColorValue(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCSSPrimitiveValue::s_info))
        return throwError(exec, TypeError);
    JSCSSPrimitiveValue* castedThisObj = static_cast<JSCSSPrimitiveValue*>(thisValue);
    CSSPrimitiveValue* imp = static_cast<CSSPrimitiveValue*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    KJS::JSValue* result = getJSRGBColor(exec, imp->getRGBColorValue(ec));
    setDOMException(exec, ec);
    return result;
}


}
