//===== Copyright © 1996-2009, Valve Corporation, All rights reserved. ======//
//
// Purpose: inlines for compile-time hashing of constant strings
//
// : $
//
//===========================================================================//
// DO NOT EDIT THIS FILE - IT IS GENERATED BY RUNNING GENERATE_CONSTRUCTORS.PL

#define TOLOWERU( c ) ( ( uint32 ) ( ( ( c >= 'A' ) && ( c <= 'Z' ) )? c + 32 : c ) )
FORCEINLINE CUtlStringToken( const char ( &str )[1] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 0;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[2] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 1;
	h ^= TOLOWERU( str[ 0 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[3] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 2;
	h ^= TOLOWERU( str[ 0 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 0 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[4] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 3;
	h ^= TOLOWERU( str[ 0 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 0 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 0 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[5] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 4;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[6] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 5;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 4 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[7] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 6;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 4 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 4 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[8] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 7;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 4 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 4 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 4 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[9] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 8;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[10] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 9;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 8 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[11] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 10;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 8 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 8 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[12] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 11;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 8 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 8 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 8 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[13] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 12;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[14] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 13;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 12 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[15] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 14;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 12 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 12 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[16] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 15;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 12 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 12 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 12 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[17] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 16;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[18] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 17;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 16 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[19] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 18;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 16 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 16 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[20] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 19;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 16 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 16 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 16 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[21] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 20;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[22] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 21;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 20 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[23] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 22;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 20 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 20 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[24] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 23;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 20 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 20 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 20 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[25] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 24;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 20 ] ) + ( TOLOWERU( str[ 20 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 20 + 2 ] ) << 16 ) +( TOLOWERU( str[ 20 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[26] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 25;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 20 ] ) + ( TOLOWERU( str[ 20 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 20 + 2 ] ) << 16 ) +( TOLOWERU( str[ 20 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 24 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[27] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 26;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 20 ] ) + ( TOLOWERU( str[ 20 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 20 + 2 ] ) << 16 ) +( TOLOWERU( str[ 20 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 24 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 24 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[28] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 27;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 20 ] ) + ( TOLOWERU( str[ 20 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 20 + 2 ] ) << 16 ) +( TOLOWERU( str[ 20 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= TOLOWERU( str[ 24 + 2 ] ) << 16;
	h ^= TOLOWERU( str[ 24 + 1 ] ) << 8;
	h ^= TOLOWERU( str[ 24 + 0 ] );
	h *= m;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}

FORCEINLINE CUtlStringToken( const char ( &str )[29] )
{
	const uint32 m = 0x5bd1e995;
	uint32 h = STRINGTOKEN_MURMURHASH_SEED ^ 28;
	uint32 k;
	const int r = 24;
	k = TOLOWERU( str[ 0 ] ) + ( TOLOWERU( str[ 0 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 0 + 2 ] ) << 16 ) +( TOLOWERU( str[ 0 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 4 ] ) + ( TOLOWERU( str[ 4 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 4 + 2 ] ) << 16 ) +( TOLOWERU( str[ 4 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 8 ] ) + ( TOLOWERU( str[ 8 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 8 + 2 ] ) << 16 ) +( TOLOWERU( str[ 8 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 12 ] ) + ( TOLOWERU( str[ 12 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 12 + 2 ] ) << 16 ) +( TOLOWERU( str[ 12 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 16 ] ) + ( TOLOWERU( str[ 16 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 16 + 2 ] ) << 16 ) +( TOLOWERU( str[ 16 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 20 ] ) + ( TOLOWERU( str[ 20 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 20 + 2 ] ) << 16 ) +( TOLOWERU( str[ 20 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	k = TOLOWERU( str[ 24 ] ) + ( TOLOWERU( str[ 24 + 1 ] ) << 8 ) + ( TOLOWERU( str[ 24 + 2 ] ) << 16 ) +( TOLOWERU( str[ 24 + 3 ] ) << 24 );
	k *= m;
	k ^= k >> r;
	k *= m;
	h *= m;
	h ^= k;
	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;
	m_nHashCode = h;
}