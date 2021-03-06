#pragma once

#include "IDrawable.h"

namespace RX78_2
{
	namespace DirectX
	{
		using namespace System;
		using namespace System::Drawing;
		using namespace Microsoft::DirectX;
		using namespace Microsoft::DirectX::Direct3D;

		/**
		 * XYZ軸
		 */
		ref class XYZAxis : IDrawable
		{
		/**
		 * フィールド
		 */
		private:
			VertexBuffer^ vertex;
			bool enabled;

		/**
		 * コンストラクタ
		 */
		public:
			XYZAxis(Device^ device, float length);

		/**
		 * メソッド
		 */
		public:
			/// 描画
			virtual void Draw(Device^ device, LightingConfig ^lightingConfig);
			/// 影描画
			virtual void DrawShadow(Device^ device, LightingConfig^ lightingConfig, Plane plane);

		/**
		 * プロパティ
		 */
		public:
			/// 有効/無効
			property bool Enabled
			{
				void set(bool value) { this->enabled = value; }
			}
		};
		// ----------------------------------------------------------------------------------------------------
	}
}
