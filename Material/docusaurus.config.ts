import {themes as prismThemes} from 'prism-react-renderer';
import type {Config} from '@docusaurus/types';
import type * as Preset from '@docusaurus/preset-classic';
import remarkMath from 'remark-math';
import rehypeKatex from 'rehype-katex';


const config: Config = {
  title: 'M11 (EC)',
  tagline: 'Edge Computing',
  favicon: 'icons/sacrifice.webp',

  url: 'https://rmnicola.github.io',
  baseUrl: '/m11-ec-encontros',

  onBrokenLinks: 'throw',
  onBrokenMarkdownLinks: 'warn',

  i18n: {
    defaultLocale: 'en',
    locales: ['en', 'pt-br'],
  },

  presets: [
    [
      'classic',
      {
        docs: {
          sidebarPath: './sidebars.ts',
          routeBasePath: '/',
          remarkPlugins: [remarkMath],
          rehypePlugins: [rehypeKatex],
        },
        blog: false,
        theme: {
          customCss: './src/css/custom.css',
        },
      } satisfies Preset.Options,
    ],
  ],

  themeConfig: {
    image: 'img/docusaurus-social-card.jpg',
    navbar: {
      title: 'Módulo 11 (EC)',
      logo: {
        alt: 'Inteli Logo',
        src: 'icons/inteli.svg',
      },
      items: [
        {
          type: 'docSidebar',
          sidebarId: 'tutorialSidebar',
          position: 'left',
          label: 'Material de computação',
        },
        {
          href: 'https://github.com/rmnicola/m11-ec-encontros',
          label: 'GitHub',
          position: 'right',
        },
      ],
    },
    prism: {
      theme: prismThemes.oneLight,
      darkTheme: prismThemes.oneDark,
    },
  stylesheets: [
      {
      href: '/katex/katex.min.css',
      type: 'text/css',
      },
  ],
  } satisfies Preset.ThemeConfig,
};

export default config;
