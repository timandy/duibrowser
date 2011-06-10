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

#include "JSCanvasPattern.h"

#include <wtf/GetPtr.h>

#include "CanvasPattern.h"

using namespace KJS;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSCanvasPatternPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCanvasPatternPrototypeTable = { 0, JSCanvasPatternPrototypeTableValues, 0 };

const ClassInfo JSCanvasPatternPrototype::s_info = { "CanvasPatternPrototype", 0, &JSCanvasPatternPrototypeTable, 0 };

JSObject* JSCanvasPatternPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSCanvasPattern.prototype]]");
    return KJS::cacheGlobalObject<JSCanvasPatternPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSCanvasPattern::s_info = { "CanvasPattern", 0, 0 , 0 };

JSCanvasPattern::JSCanvasPattern(JSObject* prototype, CanvasPattern* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSCanvasPattern::~JSCanvasPattern()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

KJS::JSValue* toJS(KJS::ExecState* exec, CanvasPattern* obj)
{
    return cacheDOMObject<CanvasPattern, JSCanvasPattern, JSCanvasPatternPrototype>(exec, obj);
}
CanvasPattern* toCanvasPattern(KJS::JSValue* val)
{
    return val->isObject(&JSCanvasPattern::s_info) ? static_cast<JSCanvasPattern*>(val)->impl() : 0;
}

}
