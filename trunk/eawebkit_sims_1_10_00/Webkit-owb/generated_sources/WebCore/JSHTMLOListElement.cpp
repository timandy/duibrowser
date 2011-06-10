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

#include "JSHTMLOListElement.h"

#include <wtf/GetPtr.h>

#include "HTMLOListElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLOListElementTableValues[5] =
{
    { "compact", (intptr_t)JSHTMLOListElement::CompactAttrNum, DontDelete, 0 },
    { "start", (intptr_t)JSHTMLOListElement::StartAttrNum, DontDelete, 0 },
    { "type", (intptr_t)JSHTMLOListElement::TypeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLOListElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLOListElementTable = { 7, JSHTMLOListElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLOListElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLOListElementConstructorTable = { 0, JSHTMLOListElementConstructorTableValues, 0 };

class JSHTMLOListElementConstructor : public DOMObject {
public:
    JSHTMLOListElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLOListElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLOListElementConstructor::s_info = { "HTMLOListElementConstructor", 0, &JSHTMLOListElementConstructorTable, 0 };

bool JSHTMLOListElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLOListElementConstructor, DOMObject>(exec, &JSHTMLOListElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLOListElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLOListElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLOListElementPrototypeTable = { 0, JSHTMLOListElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLOListElementPrototype::s_info = { "HTMLOListElementPrototype", 0, &JSHTMLOListElementPrototypeTable, 0 };

JSObject* JSHTMLOListElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLOListElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLOListElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLOListElement::s_info = { "HTMLOListElement", &JSHTMLElement::s_info, &JSHTMLOListElementTable , 0 };

JSHTMLOListElement::JSHTMLOListElement(JSObject* prototype, HTMLOListElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLOListElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLOListElement, Base>(exec, &JSHTMLOListElementTable, this, propertyName, slot);
}

JSValue* JSHTMLOListElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CompactAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        return jsBoolean(imp->compact());
    }
    case StartAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        return jsNumber(exec, imp->start());
    }
    case TypeAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        return jsString(exec, imp->type());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLOListElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLOListElement, Base>(exec, propertyName, value, &JSHTMLOListElementTable, this);
}

void JSHTMLOListElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CompactAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        imp->setCompact(value->toBoolean(exec));
        break;
    }
    case StartAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        imp->setStart(value->toInt32(exec));
        break;
    }
    case TypeAttrNum: {
        HTMLOListElement* imp = static_cast<HTMLOListElement*>(impl());
        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLOListElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLOListElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLOListElementConstructor>(exec, constructorIdentifier);
}


}
