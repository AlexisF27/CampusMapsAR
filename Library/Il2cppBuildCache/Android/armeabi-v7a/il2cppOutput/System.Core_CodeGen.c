#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000026 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x00000028 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000032 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000033 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000034 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000050 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000051 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000054 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000055 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000056 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000057 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005D TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000064 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000066 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000067 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000068 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000069 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006A System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006D System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006F TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000071 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000072 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000073 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000074 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000075 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000076 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x00000077 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x00000078 TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000080 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000081 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000082 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000084 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000085 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000086 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000087 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000088 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000089 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008B System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008C System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008D System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000008F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000090 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000091 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000092 System.Void System.Linq.Set`1::Resize()
// 0x00000093 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000094 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000095 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000096 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000097 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000098 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000099 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000009C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000009E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000009F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B3 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B6 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B8 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B9 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BA System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BD System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C2 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000C9 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000CA System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CD System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CE T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CF System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000D1 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000D2 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[210] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[210] = 
{
	4989,
	5161,
	5161,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4912,
	-1,
	4912,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[67] = 
{
	{ 0x02000004, { 100, 4 } },
	{ 0x02000005, { 104, 9 } },
	{ 0x02000006, { 115, 7 } },
	{ 0x02000007, { 124, 10 } },
	{ 0x02000008, { 136, 11 } },
	{ 0x02000009, { 150, 9 } },
	{ 0x0200000A, { 162, 12 } },
	{ 0x0200000B, { 177, 1 } },
	{ 0x0200000C, { 178, 2 } },
	{ 0x0200000D, { 180, 12 } },
	{ 0x0200000E, { 192, 8 } },
	{ 0x0200000F, { 200, 11 } },
	{ 0x02000010, { 211, 11 } },
	{ 0x02000011, { 222, 6 } },
	{ 0x02000012, { 228, 6 } },
	{ 0x02000014, { 234, 8 } },
	{ 0x02000016, { 242, 3 } },
	{ 0x02000017, { 247, 5 } },
	{ 0x02000018, { 252, 7 } },
	{ 0x02000019, { 259, 3 } },
	{ 0x0200001A, { 262, 7 } },
	{ 0x0200001B, { 269, 4 } },
	{ 0x0200001C, { 273, 36 } },
	{ 0x0200001E, { 309, 2 } },
	{ 0x0200001F, { 311, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 2 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 1 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 1 } },
	{ 0x06000011, { 43, 2 } },
	{ 0x06000012, { 45, 1 } },
	{ 0x06000013, { 46, 2 } },
	{ 0x06000014, { 48, 1 } },
	{ 0x06000015, { 49, 5 } },
	{ 0x06000016, { 54, 3 } },
	{ 0x06000017, { 57, 2 } },
	{ 0x06000018, { 59, 2 } },
	{ 0x06000019, { 61, 2 } },
	{ 0x0600001A, { 63, 4 } },
	{ 0x0600001B, { 67, 4 } },
	{ 0x0600001C, { 71, 3 } },
	{ 0x0600001D, { 74, 4 } },
	{ 0x0600001E, { 78, 4 } },
	{ 0x0600001F, { 82, 3 } },
	{ 0x06000020, { 85, 1 } },
	{ 0x06000021, { 86, 3 } },
	{ 0x06000022, { 89, 2 } },
	{ 0x06000023, { 91, 2 } },
	{ 0x06000024, { 93, 5 } },
	{ 0x06000026, { 98, 1 } },
	{ 0x06000028, { 99, 1 } },
	{ 0x06000038, { 113, 2 } },
	{ 0x0600003D, { 122, 2 } },
	{ 0x06000042, { 134, 2 } },
	{ 0x06000048, { 147, 3 } },
	{ 0x0600004D, { 159, 3 } },
	{ 0x06000052, { 174, 3 } },
	{ 0x06000097, { 245, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[313] = 
{
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 10212 },
	{ (Il2CppRGCTXDataType)2, 3779 },
	{ (Il2CppRGCTXDataType)2, 3358 },
	{ (Il2CppRGCTXDataType)3, 18168 },
	{ (Il2CppRGCTXDataType)2, 2458 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 18266 },
	{ (Il2CppRGCTXDataType)2, 3360 },
	{ (Il2CppRGCTXDataType)3, 18201 },
	{ (Il2CppRGCTXDataType)2, 2338 },
	{ (Il2CppRGCTXDataType)3, 10213 },
	{ (Il2CppRGCTXDataType)2, 3810 },
	{ (Il2CppRGCTXDataType)2, 3367 },
	{ (Il2CppRGCTXDataType)3, 18299 },
	{ (Il2CppRGCTXDataType)2, 2480 },
	{ (Il2CppRGCTXDataType)2, 3375 },
	{ (Il2CppRGCTXDataType)3, 18699 },
	{ (Il2CppRGCTXDataType)2, 3371 },
	{ (Il2CppRGCTXDataType)3, 18482 },
	{ (Il2CppRGCTXDataType)2, 746 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)3, 7724 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1409 },
	{ (Il2CppRGCTXDataType)3, 7729 },
	{ (Il2CppRGCTXDataType)3, 21897 },
	{ (Il2CppRGCTXDataType)2, 761 },
	{ (Il2CppRGCTXDataType)3, 323 },
	{ (Il2CppRGCTXDataType)3, 21921 },
	{ (Il2CppRGCTXDataType)2, 765 },
	{ (Il2CppRGCTXDataType)3, 409 },
	{ (Il2CppRGCTXDataType)2, 2985 },
	{ (Il2CppRGCTXDataType)3, 15729 },
	{ (Il2CppRGCTXDataType)3, 8711 },
	{ (Il2CppRGCTXDataType)3, 21815 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)3, 211 },
	{ (Il2CppRGCTXDataType)3, 21822 },
	{ (Il2CppRGCTXDataType)2, 754 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)3, 21852 },
	{ (Il2CppRGCTXDataType)2, 759 },
	{ (Il2CppRGCTXDataType)3, 304 },
	{ (Il2CppRGCTXDataType)3, 21908 },
	{ (Il2CppRGCTXDataType)3, 7054 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)2, 1765 },
	{ (Il2CppRGCTXDataType)2, 1902 },
	{ (Il2CppRGCTXDataType)2, 2004 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)3, 1934 },
	{ (Il2CppRGCTXDataType)3, 1935 },
	{ (Il2CppRGCTXDataType)2, 2459 },
	{ (Il2CppRGCTXDataType)3, 11101 },
	{ (Il2CppRGCTXDataType)2, 1766 },
	{ (Il2CppRGCTXDataType)3, 21712 },
	{ (Il2CppRGCTXDataType)2, 748 },
	{ (Il2CppRGCTXDataType)3, 188 },
	{ (Il2CppRGCTXDataType)2, 2209 },
	{ (Il2CppRGCTXDataType)2, 1623 },
	{ (Il2CppRGCTXDataType)2, 1781 },
	{ (Il2CppRGCTXDataType)2, 1903 },
	{ (Il2CppRGCTXDataType)2, 2210 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 1904 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)2, 1905 },
	{ (Il2CppRGCTXDataType)3, 7725 },
	{ (Il2CppRGCTXDataType)2, 2211 },
	{ (Il2CppRGCTXDataType)2, 1625 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)2, 1906 },
	{ (Il2CppRGCTXDataType)2, 2212 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)2, 1785 },
	{ (Il2CppRGCTXDataType)2, 1907 },
	{ (Il2CppRGCTXDataType)2, 1786 },
	{ (Il2CppRGCTXDataType)2, 1908 },
	{ (Il2CppRGCTXDataType)3, 7726 },
	{ (Il2CppRGCTXDataType)2, 1760 },
	{ (Il2CppRGCTXDataType)2, 1761 },
	{ (Il2CppRGCTXDataType)2, 1900 },
	{ (Il2CppRGCTXDataType)3, 7723 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)3, 21795 },
	{ (Il2CppRGCTXDataType)3, 7053 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)2, 1763 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)2, 2003 },
	{ (Il2CppRGCTXDataType)3, 21857 },
	{ (Il2CppRGCTXDataType)3, 21856 },
	{ (Il2CppRGCTXDataType)3, 10214 },
	{ (Il2CppRGCTXDataType)3, 10216 },
	{ (Il2CppRGCTXDataType)2, 526 },
	{ (Il2CppRGCTXDataType)3, 10215 },
	{ (Il2CppRGCTXDataType)3, 10224 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)2, 3361 },
	{ (Il2CppRGCTXDataType)3, 18202 },
	{ (Il2CppRGCTXDataType)3, 10225 },
	{ (Il2CppRGCTXDataType)2, 1841 },
	{ (Il2CppRGCTXDataType)2, 1941 },
	{ (Il2CppRGCTXDataType)3, 7737 },
	{ (Il2CppRGCTXDataType)3, 21716 },
	{ (Il2CppRGCTXDataType)2, 3372 },
	{ (Il2CppRGCTXDataType)3, 18483 },
	{ (Il2CppRGCTXDataType)3, 10217 },
	{ (Il2CppRGCTXDataType)2, 2340 },
	{ (Il2CppRGCTXDataType)2, 3359 },
	{ (Il2CppRGCTXDataType)3, 18169 },
	{ (Il2CppRGCTXDataType)3, 7736 },
	{ (Il2CppRGCTXDataType)3, 10218 },
	{ (Il2CppRGCTXDataType)3, 21715 },
	{ (Il2CppRGCTXDataType)2, 3368 },
	{ (Il2CppRGCTXDataType)3, 18300 },
	{ (Il2CppRGCTXDataType)3, 10231 },
	{ (Il2CppRGCTXDataType)2, 2342 },
	{ (Il2CppRGCTXDataType)2, 3366 },
	{ (Il2CppRGCTXDataType)3, 18267 },
	{ (Il2CppRGCTXDataType)3, 11155 },
	{ (Il2CppRGCTXDataType)3, 5569 },
	{ (Il2CppRGCTXDataType)3, 7738 },
	{ (Il2CppRGCTXDataType)3, 5568 },
	{ (Il2CppRGCTXDataType)3, 10232 },
	{ (Il2CppRGCTXDataType)3, 21717 },
	{ (Il2CppRGCTXDataType)2, 3376 },
	{ (Il2CppRGCTXDataType)3, 18700 },
	{ (Il2CppRGCTXDataType)3, 10245 },
	{ (Il2CppRGCTXDataType)2, 2344 },
	{ (Il2CppRGCTXDataType)2, 3374 },
	{ (Il2CppRGCTXDataType)3, 18485 },
	{ (Il2CppRGCTXDataType)3, 10246 },
	{ (Il2CppRGCTXDataType)2, 1844 },
	{ (Il2CppRGCTXDataType)2, 1944 },
	{ (Il2CppRGCTXDataType)3, 7742 },
	{ (Il2CppRGCTXDataType)3, 7741 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 18204 },
	{ (Il2CppRGCTXDataType)3, 21728 },
	{ (Il2CppRGCTXDataType)2, 3373 },
	{ (Il2CppRGCTXDataType)3, 18484 },
	{ (Il2CppRGCTXDataType)3, 10238 },
	{ (Il2CppRGCTXDataType)2, 2343 },
	{ (Il2CppRGCTXDataType)2, 3370 },
	{ (Il2CppRGCTXDataType)3, 18302 },
	{ (Il2CppRGCTXDataType)3, 7740 },
	{ (Il2CppRGCTXDataType)3, 7739 },
	{ (Il2CppRGCTXDataType)3, 10239 },
	{ (Il2CppRGCTXDataType)2, 3362 },
	{ (Il2CppRGCTXDataType)3, 18203 },
	{ (Il2CppRGCTXDataType)3, 21727 },
	{ (Il2CppRGCTXDataType)2, 3369 },
	{ (Il2CppRGCTXDataType)3, 18301 },
	{ (Il2CppRGCTXDataType)3, 10252 },
	{ (Il2CppRGCTXDataType)2, 2345 },
	{ (Il2CppRGCTXDataType)2, 3378 },
	{ (Il2CppRGCTXDataType)3, 18702 },
	{ (Il2CppRGCTXDataType)3, 11156 },
	{ (Il2CppRGCTXDataType)3, 5571 },
	{ (Il2CppRGCTXDataType)3, 7744 },
	{ (Il2CppRGCTXDataType)3, 7743 },
	{ (Il2CppRGCTXDataType)3, 5570 },
	{ (Il2CppRGCTXDataType)3, 10253 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 18205 },
	{ (Il2CppRGCTXDataType)3, 21729 },
	{ (Il2CppRGCTXDataType)2, 3377 },
	{ (Il2CppRGCTXDataType)3, 18701 },
	{ (Il2CppRGCTXDataType)3, 7733 },
	{ (Il2CppRGCTXDataType)3, 7734 },
	{ (Il2CppRGCTXDataType)3, 7745 },
	{ (Il2CppRGCTXDataType)3, 326 },
	{ (Il2CppRGCTXDataType)3, 325 },
	{ (Il2CppRGCTXDataType)2, 1833 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)3, 7735 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)2, 1957 },
	{ (Il2CppRGCTXDataType)3, 328 },
	{ (Il2CppRGCTXDataType)2, 684 },
	{ (Il2CppRGCTXDataType)2, 762 },
	{ (Il2CppRGCTXDataType)3, 324 },
	{ (Il2CppRGCTXDataType)3, 327 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)2, 1836 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 524 },
	{ (Il2CppRGCTXDataType)2, 766 },
	{ (Il2CppRGCTXDataType)3, 410 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)3, 213 },
	{ (Il2CppRGCTXDataType)2, 3056 },
	{ (Il2CppRGCTXDataType)3, 16315 },
	{ (Il2CppRGCTXDataType)2, 1824 },
	{ (Il2CppRGCTXDataType)2, 1930 },
	{ (Il2CppRGCTXDataType)3, 16316 },
	{ (Il2CppRGCTXDataType)3, 215 },
	{ (Il2CppRGCTXDataType)2, 517 },
	{ (Il2CppRGCTXDataType)2, 751 },
	{ (Il2CppRGCTXDataType)3, 212 },
	{ (Il2CppRGCTXDataType)3, 214 },
	{ (Il2CppRGCTXDataType)3, 265 },
	{ (Il2CppRGCTXDataType)2, 3058 },
	{ (Il2CppRGCTXDataType)3, 16317 },
	{ (Il2CppRGCTXDataType)2, 1827 },
	{ (Il2CppRGCTXDataType)2, 1932 },
	{ (Il2CppRGCTXDataType)3, 16318 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)2, 519 },
	{ (Il2CppRGCTXDataType)2, 755 },
	{ (Il2CppRGCTXDataType)3, 264 },
	{ (Il2CppRGCTXDataType)3, 266 },
	{ (Il2CppRGCTXDataType)2, 958 },
	{ (Il2CppRGCTXDataType)3, 1936 },
	{ (Il2CppRGCTXDataType)2, 521 },
	{ (Il2CppRGCTXDataType)2, 760 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)3, 190 },
	{ (Il2CppRGCTXDataType)2, 515 },
	{ (Il2CppRGCTXDataType)3, 192 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)3, 189 },
	{ (Il2CppRGCTXDataType)3, 191 },
	{ (Il2CppRGCTXDataType)3, 7087 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)2, 3910 },
	{ (Il2CppRGCTXDataType)3, 16312 },
	{ (Il2CppRGCTXDataType)3, 16313 },
	{ (Il2CppRGCTXDataType)2, 2019 },
	{ (Il2CppRGCTXDataType)3, 16314 },
	{ (Il2CppRGCTXDataType)2, 444 },
	{ (Il2CppRGCTXDataType)2, 756 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)3, 15716 },
	{ (Il2CppRGCTXDataType)2, 2986 },
	{ (Il2CppRGCTXDataType)3, 15730 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)3, 1937 },
	{ (Il2CppRGCTXDataType)3, 15722 },
	{ (Il2CppRGCTXDataType)3, 5541 },
	{ (Il2CppRGCTXDataType)2, 552 },
	{ (Il2CppRGCTXDataType)3, 15717 },
	{ (Il2CppRGCTXDataType)2, 2982 },
	{ (Il2CppRGCTXDataType)3, 1980 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)2, 1254 },
	{ (Il2CppRGCTXDataType)3, 5547 },
	{ (Il2CppRGCTXDataType)3, 15718 },
	{ (Il2CppRGCTXDataType)3, 5536 },
	{ (Il2CppRGCTXDataType)3, 5537 },
	{ (Il2CppRGCTXDataType)3, 5535 },
	{ (Il2CppRGCTXDataType)3, 5538 },
	{ (Il2CppRGCTXDataType)2, 1250 },
	{ (Il2CppRGCTXDataType)2, 3882 },
	{ (Il2CppRGCTXDataType)3, 7731 },
	{ (Il2CppRGCTXDataType)3, 5540 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)3, 5539 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)2, 3815 },
	{ (Il2CppRGCTXDataType)2, 1801 },
	{ (Il2CppRGCTXDataType)2, 1910 },
	{ (Il2CppRGCTXDataType)3, 7070 },
	{ (Il2CppRGCTXDataType)2, 1294 },
	{ (Il2CppRGCTXDataType)3, 8317 },
	{ (Il2CppRGCTXDataType)3, 8318 },
	{ (Il2CppRGCTXDataType)2, 1579 },
	{ (Il2CppRGCTXDataType)3, 8321 },
	{ (Il2CppRGCTXDataType)2, 1579 },
	{ (Il2CppRGCTXDataType)3, 8323 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)3, 8327 },
	{ (Il2CppRGCTXDataType)3, 8332 },
	{ (Il2CppRGCTXDataType)3, 8331 },
	{ (Il2CppRGCTXDataType)2, 3908 },
	{ (Il2CppRGCTXDataType)3, 8320 },
	{ (Il2CppRGCTXDataType)3, 8319 },
	{ (Il2CppRGCTXDataType)3, 8328 },
	{ (Il2CppRGCTXDataType)2, 2014 },
	{ (Il2CppRGCTXDataType)3, 8325 },
	{ (Il2CppRGCTXDataType)3, 22418 },
	{ (Il2CppRGCTXDataType)2, 1257 },
	{ (Il2CppRGCTXDataType)3, 5558 },
	{ (Il2CppRGCTXDataType)1, 1731 },
	{ (Il2CppRGCTXDataType)2, 3825 },
	{ (Il2CppRGCTXDataType)3, 8324 },
	{ (Il2CppRGCTXDataType)1, 3825 },
	{ (Il2CppRGCTXDataType)1, 2014 },
	{ (Il2CppRGCTXDataType)2, 3908 },
	{ (Il2CppRGCTXDataType)2, 3825 },
	{ (Il2CppRGCTXDataType)2, 1804 },
	{ (Il2CppRGCTXDataType)2, 1913 },
	{ (Il2CppRGCTXDataType)3, 8322 },
	{ (Il2CppRGCTXDataType)3, 8329 },
	{ (Il2CppRGCTXDataType)3, 8330 },
	{ (Il2CppRGCTXDataType)3, 8326 },
	{ (Il2CppRGCTXDataType)3, 8333 },
	{ (Il2CppRGCTXDataType)2, 376 },
	{ (Il2CppRGCTXDataType)3, 5572 },
	{ (Il2CppRGCTXDataType)2, 537 },
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)2, 3831 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	210,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	67,
	s_rgctxIndices,
	313,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
